import { GraphQLResolveInfo } from 'graphql';
import { Db, ObjectID } from 'mongodb';
import { missionCollection } from '../vars';
import IMission from './type';

export default (db: Db) => {
  return {
    async mission(_: any, args: any): Promise<IMission> {
      return new Promise<IMission>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(missionCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((mission: IMission) => {
            if (!mission) {
              reject(new Error('no mission found'));
            }
            mission.id = args.id;
            resolve(mission);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async missions(
      _: any,
      args: any,
      info: GraphQLResolveInfo
    ): Promise<IMission[]> {
      return new Promise<IMission[]>((resolve, reject) => {
        if (info.fieldNodes[0].selectionSet) {
          console.log(info.fieldNodes[0].selectionSet.selections);
        }
        db.collection(missionCollection)
          .find(
            {},
            {
              limit: args.perpage,
              skip: (args.page + 1) * args.perpage,
            }
          )
          .toArray()
          .then((missionsPrimitive: any[]) => {
            if (!missionsPrimitive) {
              reject(new Error('no missions found'));
            }
            const missions: IMission[] = [];
            missionsPrimitive.forEach(missionPrim => {
              missionPrim.id = missionPrim._id;
              delete missionPrim._id;
              missions.push(missionPrim as IMission);
            });
            resolve(missions);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
