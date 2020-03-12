import { Db, ObjectID } from 'mongodb';
import noteMutations from '../notes/mutations';
import taskMutations from '../tasks/mutations';
import { missionCollection } from '../vars';
import missionQueries from './queries';
import IMission from './type';

export default (db: Db) => {
  const taskMutationMethods = taskMutations(db);
  const missionQueryMethods = missionQueries(db);
  const noteMutationMethods = noteMutations(db);
  return {
    async addMission(_: any, newMission: IMission): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        newMission.notes = [];
        newMission.tasks = [];
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
                      deleteMission();
                    }
                  })
                  .catch((err: Error) => {
                    reject(err);
                    return;
                  });
              }
              if (mission.tasks.length === 0) {
                deleteMission();
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
