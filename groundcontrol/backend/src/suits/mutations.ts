import { Db, ObjectID } from 'mongodb';
import {
  missionCollection,
  userCollection,
  suitCollection,
  diagnosticsCollection,
} from '../vars';
import suitQueries from './queries';
import authMethods from '../auth/tokens'
import ISuit from './type';

export default (db: Db) => {
  const suitQueryMethods = suitQueries(db);
  const auth = authMethods(db)
  return {
    async addSuit(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.mission)) {
          reject(new Error('invalid mission id provided'));
          return;
        }
        if (!ObjectID.isValid(args.user)) {
          reject(new Error('invalid user id provided'));
          return;
        }
        auth.validateToken(parent, {
          token: args.token
        }).then(success => {
          if (success) {
            const missionID = new ObjectID(args.mission)
            const userID = new ObjectID(args.user)
            db.collection(missionCollection)
              .countDocuments({
                _id: missionID,
              })
              .then(countMissions => {
                if (countMissions > 0) {
                  db.collection(userCollection)
                    .countDocuments({
                      _id: userID,
                    })
                    .then(countUsers => {
                      if (countUsers > 0) {
                        db.collection(suitCollection)
                          .insertOne({
                            name: args.name,
                            mission: missionID,
                            user: userID,
                          })
                          .then(suitInsertRes => {
                            const suitID = new ObjectID(suitInsertRes.insertedId)
                            db.collection(userCollection)
                              .updateOne(
                                {
                                  _id: userID,
                                },
                                {
                                  $set: {
                                    suit: suitID,
                                  },
                                }
                              )
                              .then(() => {
                                db.collection(missionCollection).updateOne({
                                  _id: missionID
                                }, {
                                  $addToSet: {
                                    suits: suitID
                                  }
                                }).then(() => {
                                  resolve(suitInsertRes.insertedId);
                                }).catch((err: Error) => {
                                  reject(err)
                                })
                              })
                              .catch((err: Error) => {
                                reject(err);
                              });
                          })
                          .catch((err: Error) => {
                            reject(err);
                          });
                      } else {
                        reject(new Error('no user found with given id'));
                      }
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                } else {
                  reject(new Error('no mission found with given id'));
                }
              })
              .catch((err: Error) => {
                reject(err);
              });
          } else {
            reject(new Error('invalid token provided'))
          }
        }).catch((err: Error) => {
          reject(err)
        })
      });
    },
    async updateSuit(parent: any, args: any): Promise<string> {
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
        if (args.user) {
          if (!ObjectID.isValid(args.user)) {
            reject(new Error('invalid user id provided'));
            return;
          }
          updateData.user = new ObjectID(args.user);
          foundUpdate = true;
        }
        if (args.mission) {
          if (!ObjectID.isValid(args.mission)) {
            reject(new Error('invalid mission id provided'));
            return;
          }
          updateData.mission = new ObjectID(args.mission);
          foundUpdate = true;
        }
        if (!foundUpdate) {
          reject(new Error('no updates found'));
          return;
        }
        const suitID = new ObjectID(args.id)
        const runUpdates = (oldSuit: ISuit | null) => {
          db.collection(suitCollection)
            .updateOne(
              {
                _id: suitID,
              },
              {
                $set: updateData,
              }
            )
            .then(() => {
              const updateMission = () => {
                const successMessage = () => {
                  resolve(`updated suit ${args.id}`);
                }
                if (updateData.mission) {
                  db.collection(missionCollection).updateOne({
                    _id: new ObjectID(oldSuit?.mission)
                  }, {
                    $pullAll: {
                      suits: suitID
                    }
                  }).then(() => {
                    db.collection(missionCollection).updateOne({
                      _id: updateData.mission
                    }, {
                      $addToSet: {
                        suits: suitID
                      }
                    }).then(() => {
                      successMessage()
                    }).catch((err: Error) => {
                      reject(err)
                    })
                  }).catch((err: Error) => {
                    reject(err)
                  })
                } else {
                  successMessage()
                }
              }
              if (updateData.user) {
                db.collection(userCollection).updateOne({
                  _id: updateData.user
                }, {
                  $set: {
                    suit: suitID
                  }
                }).then(() => {
                  updateMission()
                }).catch((err: Error) => {
                  reject(err)
                })
              } else {
                updateMission()
              }
            })
            .catch((err: Error) => {
              reject(err);
            });
        }
        if (updateData.mission) {
          suitQueryMethods.suit(parent, {
            id: args.id
          }).then(suit => {
            runUpdates(suit as ISuit)
          }).catch(err => {
            reject(err)
          })
        } else {
          runUpdates(null)
        }
      });
    },
    async deleteSuit(
      parent: any,
      args: any
    ): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        suitQueryMethods
          .suit(parent, {
            id: args.id,
          })
          .then(suit => {
            const suitID = new ObjectID(suit.id);
            db.collection(missionCollection).updateOne({
              _id: new ObjectID(suit.mission)
            }, {
              $pullAll: {
                suits: suitID
              }
            }).then(() => {
              db.collection(userCollection).updateOne({
                _id: new ObjectID(suit.user)
              }, {
                $set: {
                  suit: null
                }
              }).then(() => {
                db.collection(diagnosticsCollection).deleteMany({
                  suit: suitID
                }).then(() => {
                  db.collection(suitCollection).deleteOne({
                    _id: suitID
                  }).then(() => {
                    resolve(`suit ${args.id} deleted`)
                  }).catch((err: Error) => {
                    reject(err)
                  })
                }).catch((err: Error) => {
                  reject(err)
                })
              }).catch((err: Error) => {
                reject(err)
              })
            }).catch((err: Error) => {
              reject(err)
            })
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
