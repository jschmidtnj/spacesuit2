import { ApolloServer } from 'apollo-server-express';
import compression from 'compression';
import cors from 'cors';
import { config } from 'dotenv';
import express from 'express';
import depthLimit from 'graphql-depth-limit';
import createResolvers from './resolvers';
import schema from './schema';

const runInit = () => {
  config();
  if (!process.env.PORT) {
    throw new Error('cannot find port');
  }
  createResolvers()
    .then(resolvers => {
      const app = express();
      app.use('*', cors());
      const server = new ApolloServer({
        resolvers,
        typeDefs: schema,
        validationRules: [depthLimit(7)],
      });
      app.use(server.graphqlPath, compression());
      server.applyMiddleware({
        app,
        path: server.graphqlPath,
      });
      app.get('/hello', (_, res) => {
        res.json({
          message: 'test message',
        });
      });
      app.listen({ port: process.env.PORT }, () =>
        console.log(
          `Server ready at http://localhost:${process.env.PORT}${server.graphqlPath} 🚀`
        )
      );
    })
    .catch(err => {
      console.error(err);
    });
};

if (!module.parent) {
  runInit();
}

export default runInit;
