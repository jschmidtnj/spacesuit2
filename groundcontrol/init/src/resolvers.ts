import { IResolvers } from 'graphql-tools';
import connectDB from './db';
import mutations from './mutations';
import queries from './queries';

const createResolvers = async (): Promise<IResolvers<any, any>> => {
  return new Promise<IResolvers<any, any>>((resolve, reject) => {
    connectDB()
      .then(db => {
        const resolvers: IResolvers = {
          Mutation: {
            ...mutations(db),
          },
          Query: {
            hello(): string {
              return `Hello world! 🚀`;
            },
            ...queries(db),
          },
        };
        resolve(resolvers);
      })
      .catch(err => {
        reject(err);
      });
  });
};

export default createResolvers;
