import { Db, MongoClient } from 'mongodb';

const connectDB = async (): Promise<Db> => {
  return new Promise<Db>((resolve, reject) => {
    // Connection URL
    if (!process.env.DB_CONNECTION_URI) {
      reject(new Error('cannot find connection uri'));
      return;
    }

    if (!process.env.DB_NAME) {
      reject(new Error('cannot find db name'));
      return;
    }

    // Use connect method to connect to the server
    MongoClient.connect(process.env.DB_CONNECTION_URI, {
      useNewUrlParser: true,
      useUnifiedTopology: true,
    })
      .then(client => {
        console.log('Connected successfully to server');
        const db = client.db(process.env.DB_NAME);
        (process as NodeJS.EventEmitter).on('exit', () => {
          client.close();
        });
        resolve(db);
      })
      .catch(err => {
        reject(err);
      });
  });
};

export default connectDB;
