import { Db, ObjectID } from 'mongodb';
import { userCollection, astronautType, groundControlType } from '../vars';
import IUser from './type';

export default (db: Db) => {
  return {
    async users(_: any, args: any): Promise<IUser[]> {
      return new Promise<IUser[]>((resolve, reject) => {
        const filters: any = {}
        if (args.mission) {
          if (!ObjectID.isValid(args.mission)) {
            reject(new Error('invalid mission id given'));
            return;
          }
          filters.mission = new ObjectID(args.mission)
        }
        if (args.type) {
          if (![astronautType, groundControlType].includes(args.type)) {
            reject(new Error('invalid user type given'));
            return;
          }
          filters.type = args.type
        }
        db.collection(userCollection)
          .find(filters, {
            limit: args.perpage,
            skip: (args.page + 1) * args.perpage,
          })
          .toArray()
          .then((userPrimitives: any[]) => {
            if (!userPrimitives) {
              reject(new Error('no users found'));
            }
            const users: IUser[] = [];
            userPrimitives.forEach(userPrim => {
              userPrim.id = userPrim._id;
              delete userPrim._id;
              users.push(userPrim as IUser);
            });
            resolve(users);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async user(_: any, args: any): Promise<IUser> {
      return new Promise<IUser>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(userCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((user: IUser) => {
            if (!user) {
              reject(new Error('no user found'));
            }
            user.id = user.id;
            resolve(user);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
