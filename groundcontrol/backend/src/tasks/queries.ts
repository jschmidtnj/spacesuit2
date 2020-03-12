import { Db, ObjectID } from 'mongodb';
import { missionType, taskCollection, taskType } from '../vars';
import ITask from './type';

export default (db: Db) => {
  return {
    async tasks(_: any, args: any): Promise<ITask[]> {
      return new Promise<ITask[]>((resolve, reject) => {
        const filter: any = {};
        if (args.parentID && args.parentType) {
          if (![missionType, taskType].includes(args.parentType)) {
            reject(new Error('invalid parent type given'));
            return;
          }
          filter.parentType = args.parentType;
          filter.parentID = args.parentID;
        }
        db.collection(taskCollection)
          .find(
            {},
            {
              limit: args.perpage,
              skip: (args.page + 1) * args.perpage,
            }
          )
          .toArray()
          .then((taskPrimitive: any[]) => {
            if (!taskPrimitive) {
              reject(new Error('no tasks found'));
            }
            const tasks: ITask[] = [];
            taskPrimitive.forEach(taskPrim => {
              taskPrim.id = taskPrim._id;
              delete taskPrim._id;
              tasks.push(taskPrim as ITask);
            });
            resolve(tasks);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async task(_: any, args: any): Promise<ITask> {
      return new Promise<ITask>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(taskCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((task: ITask) => {
            if (!task) {
              reject(new Error('no task found'));
            }
            task.id = args.id;
            resolve(task);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
