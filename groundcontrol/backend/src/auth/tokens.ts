import bcrypt from 'bcrypt';
import { Db } from 'mongodb';
import { keyCollection } from '../vars';

export default (db: Db) => {
  const tokens = async (): Promise<string[]> => {
    return new Promise<string[]>((resolve, reject) => {
      db.collection(keyCollection)
        .find({})
        .toArray()
        .then((tokenPrimitive: any[]) => {
          if (!tokenPrimitive) {
            reject(new Error('no tokens found'));
          }
          const foundTokens: string[] = [];
          tokenPrimitive.forEach(tokenPrim => {
            foundTokens.push(tokenPrim._id as string);
          });
          resolve(foundTokens);
        })
        .catch((err: Error) => {
          reject(err);
        });
    });
  };
  return {
    async validateToken(_: any, args: any): Promise<boolean> {
      return new Promise<boolean>((resolve, reject) => {
        const tokenStr = args.token as string;
        tokens()
          .then(hashedTokens => {
            if (hashedTokens.length === 0) {
              resolve(false);
              return;
            }
            let stop = false;
            for (let i = 0; i < hashedTokens.length; i++) {
              bcrypt
                .compare(tokenStr, hashedTokens[i])
                .then(success => {
                  if (success) {
                    stop = true;
                    resolve(success);
                  } else if (i === hashedTokens.length - 1) {
                    resolve(false);
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
    tokens,
  };
};
