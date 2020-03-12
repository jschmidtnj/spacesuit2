import { Db, ObjectID } from 'mongodb';
import { fileCollection } from '../vars';
import IFile from './type';

export default (db: Db) => {
  return {
    async file(_: any, args: any): Promise<IFile> {
      return new Promise<IFile>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(fileCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((file: IFile) => {
            if (!file) {
              reject(new Error('no file found'));
            }
            file.id = args.id;
            resolve(file);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
