import { Db, ObjectID } from 'mongodb';
import {
  userCollection,
  groundControlType,
  astronautType,
  missionCollection,
} from '../vars';
import userQueries from './queries';
import authMethods from '../auth/tokens';
import suitMutations from '../suits/mutations'

const getUserTypeIndex = (userType: string) => {
  return userType === astronautType ? 'astronauts' : 'groundcontrol'
}

export default (db: Db) => {
  const userQueryMethods = userQueries(db);
  const suitMutationMethods = suitMutations(db);
  const auth = authMethods(db)
  return {
    async addUser(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (![groundControlType, astronautType].includes(args.type)) {
          reject(new Error('invalid user type provided'));
          return;
        }
        auth.validateToken(parent, {
          token: args.token
        }).then(success => {
          if (success) {
            db.collection(userCollection)
              .insertOne({
                name: args.name,
                type: args.type,
                files: [],
                missions: [],
                suit: null
              })
              .then(suitInsertRes => {
                resolve(suitInsertRes.insertedId);
              })
              .catch((err: Error) => {
                reject(err);
              });
          } else {
            reject(new Error('token not valid'));
          }
        }).catch((err: Error) => {
          reject(err)
        })
      });
    },
    async addUserToMission(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.user)) {
          reject(new Error('invalid user id provided'));
          return;
        }
        if (!ObjectID.isValid(args.mission)) {
          reject(new Error('invalid mission id provided'));
          return;
        }
        auth.validateToken(parent, {
          token: args.token
        }).then(success => {
          if (success) {
            userQueryMethods.user(parent, {
              id: args.user
            }).then(user => {
              if (user.missions.includes(args.mission)) {
                reject(new Error(`user ${args.user} already in mission ${args.mission}`))
                return
              }
              const missionID = new ObjectID(args.mission)
              const userID = new ObjectID(args.user)
              const userTypeIndex = getUserTypeIndex(user.type)
              const updateData: any = {}
              updateData[userTypeIndex] = userID
              db.collection(missionCollection).updateOne({
                _id: missionID
              }, {
                $addToSet: updateData
              }).then(() => {
                db.collection(userCollection).updateOne({
                  _id: userID
                }, {
                  $addToSet: {
                    missions: missionID
                  }
                }).then(() => {
                  resolve(`added user ${args.user} to mission ${args.mission}`)
                }).catch((err: Error) => {
                  reject(err)
                })
              }).catch((err: Error) => {
                reject(err)
              })
            }).catch((err: Error) => {
              reject(err)
            })
          } else {
            reject(new Error('token not valid'));
          }
        }).catch((err: Error) => {
          reject(err)
        })
      });
    },
    async updateUser(_: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        const updateData: any = {};
        let foundUpdate = false;
        if (args.name) {
          updateData.name = args.name;
          foundUpdate = true;
        }
        if (args.type) {
          if (![groundControlType, astronautType].includes(args.type)) {
            reject(new Error('invalid user type provided'));
            return;
          }
          updateData.type = new ObjectID(args.type);
          foundUpdate = true;
        }
        if (!foundUpdate) {
          reject(new Error('no updates found'));
          return;
        }
        db.collection(userCollection)
          .updateOne(
            {
              _id: new ObjectID(args.id),
            },
            {
              $set: updateData,
            }
          )
          .then(() => {
            resolve(`updated suit ${args.id}`);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async deleteUser(
      parent: any,
      args: any
    ): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        const userID = new ObjectID(args.id)
        userQueryMethods
          .user(parent, {
            id: args.id,
          })
          .then(user => {
            const deleteSuit = () => {
              const deleteUser = () => {
                db.collection(userCollection).deleteOne({
                  _id: new ObjectID(args.id)
                }).then(() => {
                  resolve(`deleted user ${args.id}`)
                }).catch((err: Error) => {
                  reject(err)
                })
              }
              if (user.suit) {
                // TODO - do not update user in this method
                suitMutationMethods.deleteSuit(parent, {
                  id: user.suit
                }).then(() => {
                  deleteUser()
                }).catch((err: Error) => {
                  reject(err)
                })
              } else {
                deleteUser()
              }
            }
            const userTypeIndex = getUserTypeIndex(user.type)
            for (let i = 0; i < user.missions.length; i++) {
              const updateData: any = {}
              updateData[userTypeIndex] = userID
              db.collection(missionCollection).updateOne({
                _id: new ObjectID(user.missions[i])
              }, {
                $pullAll: updateData
              }).then(() => {
                if (i === user.missions.length - 1) {
                  deleteSuit()
                }
              }).catch((err: Error) => {
                reject(err)
              })
            }
            if (user.missions.length === 0) {
              deleteSuit()
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
