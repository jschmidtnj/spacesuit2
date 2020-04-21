import { Db, ObjectID } from 'mongodb';
import noteMutations from '../notes/mutations';
import taskMutations from '../tasks/mutations';
import suitMutations from '../suits/mutations';
import { missionCollection, userCollection } from '../vars';
import missionQueries from './queries';
import IMission from './type';

export default (db: Db) => {
  const taskMutationMethods = taskMutations(db);
  const missionQueryMethods = missionQueries(db);
  const noteMutationMethods = noteMutations(db);
  const suitMutationMethods = suitMutations(db);
  return {
    async addMission(_: any, newMission: IMission): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        newMission.notes = [];
        newMission.tasks = [];
        newMission.astronauts = [];
        newMission.groundcontrol = [];
        newMission.suits = [];
        db.collection(missionCollection)
          .insertOne(newMission)
          .then(result => {
            resolve(result.insertedId);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async updateMission(_: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        const updateData: any = {};
        let foundUpdate = false;
        if (args.title) {
          updateData.title = args.title;
          foundUpdate = true;
        }
        if (args.description) {
          updateData.description = args.description;
          foundUpdate = true;
        }
        if (!foundUpdate) {
          reject(new Error('no updates found'));
          return;
        }
        db.collection(missionCollection)
          .updateOne(
            {
              _id: new ObjectID(args.id),
            },
            {
              $set: updateData,
            }
          )
          .then(() => {
            resolve(`updated mission ${args.id}`);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async deleteMission(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        missionQueryMethods
          .mission(parent, {
            id: args.id,
          })
          .then(mission => {
            const deleteTasks = () => {
              const updateUsers = () => {
                const updateSuits = () => {
                  const deleteMission = () => {
                    db.collection(missionCollection)
                      .deleteOne({
                        _id: new ObjectID(args.id),
                      })
                      .then(() => {
                        resolve(`deleted mission ${args.id}`);
                      })
                      .catch((err: Error) => {
                        reject(err);
                      });
                  };
                  for (let i = 0; i < mission.suits.length; i++) {
                    suitMutationMethods.deleteSuit(parent, {
                      id: mission.suits[i]
                    }).then(() => {
                      if (i === mission.suits.length - 1) {
                        deleteMission();
                      }
                    })
                      .catch((err: Error) => {
                        reject(err);
                        return;
                      });
                  }
                  if (mission.suits.length === 0) {
                    deleteMission();
                  }
                };
                const users = mission.astronauts.concat(mission.groundcontrol)
                for (let i = 0; i < users.length; i++) {
                  db.collection(userCollection).updateOne({
                    _id: new ObjectID(users[i])
                  }, {
                    $set: {
                      mission: null
                    }
                  })
                    .then(() => {
                      if (i === users.length - 1) {
                        updateSuits();
                      }
                    })
                    .catch((err: Error) => {
                      reject(err);
                      return;
                    });
                }
                if (users.length === 0) {
                  updateSuits();
                }
              };
              for (let i = 0; i < mission.tasks.length; i++) {
                taskMutationMethods
                  .deleteTask(
                    parent,
                    {
                      id: mission.tasks[i],
                    },
                    null,
                    false
                  )
                  .then(() => {
                    if (i === mission.tasks.length - 1) {
                      updateUsers();
                    }
                  })
                  .catch((err: Error) => {
                    reject(err);
                    return;
                  });
              }
              if (mission.tasks.length === 0) {
                updateUsers();
              }
            };
            for (let i = 0; i < mission.notes.length; i++) {
              noteMutationMethods
                .deleteNote(
                  parent,
                  {
                    id: mission.notes[i],
                  },
                  null,
                  false
                )
                .then(() => {
                  if (i === mission.notes.length - 1) {
                    deleteTasks();
                  }
                })
                .catch((err: Error) => {
                  reject(err);
                  return;
                });
            }
            if (mission.notes.length === 0) {
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
