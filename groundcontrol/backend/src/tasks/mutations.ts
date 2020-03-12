import { Db, ObjectID } from 'mongodb';
import noteMutations from '../notes/mutations';
import taskQueries from '../tasks/queries';
import {
  missionCollection,
  missionType,
  taskCollection,
  taskType,
} from '../vars';
import ITask from './type';

export default (db: Db) => {
  const taskQueryMethods = taskQueries(db);
  const noteMutationMethods = noteMutations(db);
  return {
    async addTask(_: any, newTask: ITask): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (![missionType, taskType].includes(newTask.parentType)) {
          reject(new Error('invalid parent type'));
          return;
        }
        if (!ObjectID.isValid(newTask.parentID)) {
          reject(new Error('invalid parent id provided'));
          return;
        }
        const collectionName =
          newTask.parentType === missionType
            ? missionCollection
            : taskCollection;
        const parentID = new ObjectID(newTask.parentID);
        db.collection(collectionName)
          .countDocuments({
            _id: parentID,
          })
          .then(count => {
            if (count > 0) {
              newTask.notes = [];
              newTask.tasks = [];
              db.collection(taskCollection)
                .insertOne(newTask)
                .then(taskInsertRes => {
                  db.collection(collectionName)
                    .updateOne(
                      {
                        _id: parentID,
                      },
                      {
                        $addToSet: {
                          tasks: new ObjectID(taskInsertRes.insertedId),
                        },
                      }
                    )
                    .then(() => {
                      resolve(taskInsertRes.insertedId);
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                })
                .catch((err: Error) => {
                  reject(err);
                });
            } else {
              reject(new Error(`no ${newTask.parentType} found with given id`));
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async updateTask(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        const currentID = new ObjectID(args.id);
        const updates: any = {
          $set: {},
        };
        let foundUpdates = false;
        if (args.title) {
          updates.$set.title = args.title;
          foundUpdates = true;
        }
        if (args.description) {
          updates.$set.description = args.description;
          foundUpdates = true;
        }
        const successMessage = `updated task ${args.id}`;
        const updateTask = () => {
          db.collection(taskCollection)
            .updateOne(
              {
                _id: currentID,
              },
              updates
            )
            .then(() => {
              resolve(successMessage);
            })
            .catch((err: Error) => {
              reject(err);
            });
        };
        const updateParent = (parentType?: string, parentID?: ObjectID) => {
          taskQueryMethods
            .task(parent, {
              id: currentID,
            })
            .then(task => {
              db.collection(
                task.parentType === missionType
                  ? missionCollection
                  : taskCollection
              )
                .updateOne(
                  {
                    _id: new ObjectID(task.parentID),
                  },
                  {
                    $pull: {
                      tasks: currentID,
                    },
                  }
                )
                .then(() => {
                  const parentUpdates: any = {};
                  if ((args.index as number) == null) {
                    parentUpdates.$addToSet = {
                      tasks: currentID,
                    };
                  } else {
                    parentUpdates.$push = {
                      tasks: {
                        $each: [currentID],
                        $position: args.index,
                      },
                    };
                  }
                  db.collection(
                    (parentType ? parentType : task.parentType) === missionType
                      ? missionCollection
                      : taskCollection
                  )
                    .updateOne(
                      {
                        _id: parentID ? parentID : new ObjectID(task.parentID),
                      },
                      parentUpdates
                    )
                    .then(() => {
                      if (foundUpdates) {
                        updateTask();
                      } else {
                        resolve(successMessage);
                      }
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                })
                .catch((err: Error) => {
                  reject(err);
                });
            })
            .catch((err: Error) => {
              reject(err);
            });
        };
        if (args.parentType && args.parentID) {
          if (![missionType, taskType].includes(args.parentType)) {
            reject(new Error('invalid parent type'));
            return;
          }
          if (!ObjectID.isValid(args.parentID)) {
            reject(new Error('invalid parent id provided'));
            return;
          }
          const parentID = new ObjectID(args.parentID);
          if (currentID.equals(parentID)) {
            reject(new Error('cannot set parent to current id'));
            return;
          }
          const collectionName =
            args.parentType === missionType
              ? missionCollection
              : taskCollection;
          db.collection(collectionName)
            .countDocuments({
              _id: parentID,
            })
            .then(count => {
              if (count > 0) {
                updates.$set.parentID = parentID;
                updates.$set.parentType = args.parentType;
                foundUpdates = true;
                updateParent(args.parentType, parentID);
              } else {
                reject(new Error(`no ${args.parentType} found with given id`));
              }
            })
            .catch((err: Error) => {
              reject(err);
            });
        } else if ((args.index as number) != null) {
          updateParent();
        } else if (foundUpdates) {
          updateTask();
        } else {
          reject(new Error('no updates found'));
        }
      });
    },
    async deleteTask(
      parent: any,
      args: any,
      _info: any,
      _mergeInfo: any,
      updateParents: boolean = true
    ): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        taskQueryMethods
          .task(parent, {
            id: args.id,
          })
          .then(task => {
            const deleteTask = () => {
              db.collection(taskCollection)
                .deleteOne({
                  _id: new ObjectID(args.id),
                })
                .then(() => {
                  resolve(`deleted task ${args.id}`);
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            const update = () => {
              const collectionName =
                task.parentType === missionType
                  ? missionCollection
                  : taskCollection;
              db.collection(collectionName)
                .updateOne(
                  {
                    _id: new ObjectID(task.parentID),
                  },
                  {
                    $pull: {
                      tasks: new ObjectID(task.id),
                    },
                  }
                )
                .then(() => {
                  deleteTask();
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            const deleteTasks = () => {
              for (let i = 0; i < task.tasks.length; i++) {
                this.deleteTask(
                  parent,
                  {
                    id: task.tasks[i],
                  },
                  null,
                  false
                )
                  .then(() => {
                    if (i === task.tasks.length - 1) {
                      if (updateParents) {
                        update();
                      } else {
                        deleteTask();
                      }
                    }
                  })
                  .catch((err: Error) => {
                    reject(err);
                    return;
                  });
              }
              if (task.tasks.length === 0) {
                if (updateParents) {
                  update();
                } else {
                  deleteTask();
                }
              }
            };
            for (let i = 0; i < task.notes.length; i++) {
              noteMutationMethods
                .deleteNote(
                  parent,
                  {
                    id: task.notes[i],
                  },
                  null,
                  false
                )
                .then(() => {
                  if (i === task.notes.length - 1) {
                    deleteTasks();
                  }
                })
                .catch((err: Error) => {
                  reject(err);
                  return;
                });
            }
            if (task.notes.length === 0) {
              deleteTasks();
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
