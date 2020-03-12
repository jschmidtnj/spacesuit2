import { Db, ObjectID } from 'mongodb';
import fileMutations from '../files/mutations';
import {
  missionCollection,
  missionType,
  noteCollection,
  taskCollection,
  taskType,
} from '../vars';
import noteQueries from './queries';
import INote from './type';

export default (db: Db) => {
  const noteQueryMethods = noteQueries(db);
  const fileMutationMethods = fileMutations(db);
  return {
    async addNote(_: any, newNote: INote): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (![missionType, taskType].includes(newNote.parentType)) {
          reject(new Error('invalid parent type'));
          return;
        }
        if (!ObjectID.isValid(newNote.parentID)) {
          reject(new Error('invalid parent id provided'));
          return;
        }
        const collectionName =
          newNote.parentType === missionType
            ? missionCollection
            : taskCollection;
        const parentID = new ObjectID(newNote.parentID);
        db.collection(collectionName)
          .countDocuments({
            _id: parentID,
          })
          .then(count => {
            if (count > 0) {
              newNote.files = [];
              db.collection(noteCollection)
                .insertOne(newNote)
                .then(noteInsertRes => {
                  db.collection(collectionName)
                    .updateOne(
                      {
                        _id: parentID,
                      },
                      {
                        $addToSet: {
                          notes: new ObjectID(noteInsertRes.insertedId),
                        },
                      }
                    )
                    .then(() => {
                      resolve(noteInsertRes.insertedId);
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                })
                .catch((err: Error) => {
                  reject(err);
                });
            } else {
              reject(new Error(`no ${newNote.parentType} found with given id`));
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async updateNote(_: any, args: any): Promise<string> {
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
        if (args.message) {
          updateData.message = args.message;
          foundUpdate = true;
        }
        if (!foundUpdate) {
          reject(new Error('no updates found'));
          return;
        }
        db.collection(noteCollection)
          .updateOne(
            {
              _id: new ObjectID(args.id),
            },
            {
              $set: updateData,
            }
          )
          .then(() => {
            resolve(`updated note ${args.id}`);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async deleteNote(
      parent: any,
      args: any,
      _info: any,
      _mergeInfo: any,
      updateParents: boolean = true
    ): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        noteQueryMethods
          .note(parent, {
            id: args.id,
          })
          .then(note => {
            const noteID = new ObjectID(note.id);
            const deleteNote = () => {
              db.collection(noteCollection)
                .deleteOne({
                  _id: noteID,
                })
                .then(() => {
                  resolve(`deleted note ${args.id}`);
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            const update = () => {
              const collectionName =
                note.parentType === missionType
                  ? missionCollection
                  : taskCollection;
              db.collection(collectionName)
                .updateOne(
                  {
                    _id: new ObjectID(note.parentID),
                  },
                  {
                    $pull: {
                      notes: noteID,
                    },
                  }
                )
                .then(() => {
                  deleteNote();
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            for (let i = 0; i < note.files.length; i++) {
              fileMutationMethods
                .deleteFile(
                  parent,
                  {
                    id: note.files[i],
                  },
                  null,
                  false
                )
                .then(() => {
                  if (i === note.files.length - 1) {
                    if (updateParents) {
                      update();
                    } else {
                      deleteNote();
                    }
                  }
                })
                .catch((err: Error) => {
                  reject(err);
                  return;
                });
            }
            if (note.files.length === 0) {
              if (updateParents) {
                update();
              } else {
                deleteNote();
              }
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
