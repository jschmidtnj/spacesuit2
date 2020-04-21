import bcrypt from 'bcrypt';
import { Db } from 'mongodb';
import queries from './queries';
import { keyCollection, saltRounds } from './vars';

export default (db: Db) => {
  const tokenQueries = queries(db);
  return {
    async addToken(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        const tokenStr = args.token as string;
        tokenQueries
          .validateToken(parent, tokenStr)
          .then(validated => {
            if (!validated) {
              bcrypt
                .hash(tokenStr, saltRounds)
                .then(hashed => {
                  db.collection(keyCollection)
                    .insertOne({
                      _id: hashed,
                    })
                    .then(() => {
                      resolve('added token');
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                })
                .catch(err => {
                  reject(err);
                });
            } else {
              reject(new Error('token already exists'));
            }
          })
          .catch(err => {
            reject(err);
          });
      });
    },
    async deleteToken(_: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        const cannotFindToken = () => {
          reject(new Error('cannot find token'));
        };
        const tokenStr = args.token as string;
        tokenQueries
          .tokens()
          .then(hashedTokens => {
            if (hashedTokens.length === 0) {
              cannotFindToken();
              return;
            }
            let stop = false;
            for (let i = 0; i < hashedTokens.length; i++) {
              bcrypt
                .compare(tokenStr, hashedTokens[i])
                .then(success => {
                  if (success) {
                    db.collection(keyCollection)
                      .deleteOne({
                        _id: hashedTokens[i],
                      })
                      .then(() => {
                        stop = true;
                        resolve('removed token');
                      })
                      .catch(err => {
                        stop = true;
                        reject(err);
                      });
                  } else if (i === hashedTokens.length - 1) {
                    cannotFindToken();
                    return;
                  }
                })
                .catch(err => {
                  stop = true;
                  reject(err);
                });
              if (stop) {
                break;
              }
            }
          })
          .catch(err => {
            reject(err);
          });
      });
    },
  };
};
