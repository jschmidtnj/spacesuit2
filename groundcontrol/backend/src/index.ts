import { ApolloServer } from 'apollo-server-express';
import assert from 'assert';
import compression from 'compression';
import cors from 'cors';
import { config } from 'dotenv';
import express from 'express';
import depthLimit from 'graphql-depth-limit';
import { MongoClient } from 'mongodb';
import schema from './schema';

const resolvers = {
  Query: {
    hello: () => 'world',
  },
};

const connectDB = () => {
  // Connection URL
  if (!process.env.DB_CONNECTION_URI) {
    throw new Error('cannot find connection uri');
  }

  if (!process.env.DB_NAME) {
    throw new Error('cannot find db name');
  }

  // Use connect method to connect to the server
  MongoClient.connect(process.env.DB_CONNECTION_URI, {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  })
    .then(client => {
      console.log('Connected successfully to server');
      const db = client.db(process.env.DB_NAME);
      console.log(db.databaseName);
      client.close();
    })
    .catch(err => {
      assert.equal(null, err);
    });
};

const runAPI = () => {
  config();
  if (!process.env.PORT) {
    throw new Error('cannot find port');
  }
  connectDB();
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
  app.listen({ port: process.env.PORT }, () =>
    console.log(
      `Server ready at http://localhost:${process.env.PORT}${server.graphqlPath} 🚀`
    )
  );
};

if (!module.parent) {
  runAPI();
}

export default runAPI;
