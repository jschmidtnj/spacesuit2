import { IResolvers } from 'graphql-tools';
import connectDB from './db';
import { taskCollection } from './vars';

interface ITask {
  ID?: string;
  title?: string;
  description?: string;
  files?: [string];
  subtasks?: [string];
  parentTask?: string;
}

interface IOutput {
  code: number;
  message: string;
}

const createResolvers = async (): Promise<IResolvers<any, any>> => {
  return new Promise<IResolvers<any, any>>((resDB, rejDB) => {
    connectDB()
      .then(db => {
        console.log(db.databaseName);
        const resolvers: IResolvers = {
          Mutation: {
            async addTask(_, args: any): Promise<IOutput> {
              const newTask: ITask = {
                description: args.description,
                files: args.files,
                subtasks: args.subtasks,
                title: args.title,
              };
              return new Promise<IOutput>((resolve, reject) => {
                db.collection(taskCollection)
                  .insertOne(newTask)
                  .then(result => {
                    newTask.ID = result.insertedId;
                    if (!newTask.ID) {
                      reject({
                        code: 500,
                        message: 'no new task id found',
                      });
                      return
                    }
                    resolve({
                      code: 200,
                      message: newTask.ID,
                    });
                  })
                  .catch(err => {
                    reject({
                      code: 500,
                      message: err.message,
                    });
                  });
              });
            },
          },
          Query: {
            hello(): string {
              return `Hello world! 🚀`;
            },
          },
        };
        resDB(resolvers);
      })
      .catch(err => {
        rejDB(err);
      });
  });
};

export default createResolvers;
