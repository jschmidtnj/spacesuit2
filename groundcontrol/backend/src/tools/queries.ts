import { Db, ObjectID } from 'mongodb';
import { toolCollection } from '../vars';
import ITool from './type';

export default (db: Db) => {
  return {
    async tools(_: any, args: any): Promise<ITool[]> {
      return new Promise<ITool[]>((resolve, reject) => {
        db.collection(toolCollection)
          .find(
            {},
            {
              limit: args.perpage,
              skip: (args.page + 1) * args.perpage,
            }
          )
          .toArray()
          .then((toolPrimitive: any[]) => {
            if (!toolPrimitive) {
              reject(new Error('no tools found'));
            }
            const tools: ITool[] = [];
            toolPrimitive.forEach(toolPrim => {
              toolPrim.id = toolPrim._id;
              delete toolPrim._id;
              tools.push(toolPrim as ITool);
            });
            resolve(tools);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async tool(_: any, args: any): Promise<ITool> {
      return new Promise<ITool>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(toolCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((tool: ITool) => {
            if (!tool) {
              reject(new Error('no tool found'));
            }
            tool.id = args.id;
            resolve(tool);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
