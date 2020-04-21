import { Db, ObjectID } from 'mongodb';
import { suitCollection } from '../vars';
import ISuit from './type';

export default (db: Db) => {
  return {
    async suits(_: any, args: any): Promise<ISuit[]> {
      return new Promise<ISuit[]>((resolve, reject) => {
        if (!ObjectID.isValid(args.mission)) {
          reject(new Error('invalid mission id given'));
          return;
        }
        db.collection(suitCollection)
          .find({
            _id: new ObjectID(args.mission)
          }, {
            limit: args.perpage,
            skip: (args.page + 1) * args.perpage,
          })
          .toArray()
          .then((suitPrimitives: any[]) => {
            if (!suitPrimitives) {
              reject(new Error('no suits found'));
            }
            const suits: ISuit[] = [];
            suitPrimitives.forEach(suitPrim => {
              suitPrim.id = suitPrim._id;
              delete suitPrim._id;
              suits.push(suitPrim as ISuit);
            });
            resolve(suits);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async suit(_: any, args: any): Promise<ISuit> {
      return new Promise<ISuit>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(suitCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((suit: ISuit) => {
            if (!suit) {
              reject(new Error('no suit found'));
            }
            suit.id = args.id;
            resolve(suit);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
