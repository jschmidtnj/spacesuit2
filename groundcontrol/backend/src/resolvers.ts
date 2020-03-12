import { IResolvers } from 'graphql-tools';
import connectDB from './db';
import fileMutations from './files/mutations';
import fileQueries from './files/queries';
import missionMutations from './missions/mutations';
import missionQueries from './missions/queries';
import noteMutations from './notes/mutations';
import noteQueries from './notes/queries';
import taskMutations from './tasks/mutations';
import tasksQueries from './tasks/queries';

const createResolvers = async (): Promise<IResolvers<any, any>> => {
  return new Promise<IResolvers<any, any>>((resolve, reject) => {
    connectDB()
      .then(db => {
        const resolvers: IResolvers = {
          Mutation: {
            ...fileMutations(db),
            ...missionMutations(db),
            ...noteMutations(db),
            ...taskMutations(db),
          },
          Query: {
            ...fileQueries(db),
            ...missionQueries(db),
            ...noteQueries(db),
            ...tasksQueries(db),
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
