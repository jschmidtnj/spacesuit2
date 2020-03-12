import { FileUpload } from 'graphql-upload';
import { Db, ObjectID } from 'mongodb';
import {
  fileCollection,
  noteCollection,
  noteType,
  toolCollection,
  toolType,
} from '../vars';
import fileQueries from './queries';
import IFile from './type';

export default (db: Db) => {
  const fileQueryMethods = fileQueries(db);
  return {
    async addFile(_: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.parentID)) {
          reject(new Error('invalid parent id'));
          return;
        }
        let collectionName: string;
        switch (args.parentType as string) {
          case noteType:
            collectionName = noteCollection;
            break;
          case toolType:
            collectionName = toolCollection;
            break;
          default:
            reject(new Error('invalid parent type'));
            return;
        }
        const parentID = new ObjectID(args.parentID);
        db.collection(collectionName)
          .countDocuments({
            _id: parentID,
          })
          .then(count => {
            if (count > 0) {
              // TODO - add to s3 storage
              const file = args.file as FileUpload;
              console.log(file.encoding);
              const newFile: IFile = {
                encoding: file.encoding,
                mime: file.mimetype,
                name: file.filename,
                parentID: args.parentID,
                parentType: args.parentType,
              };
              db.collection(fileCollection)
                .insertOne(newFile)
                .then(fileInsertRes => {
                  db.collection(noteCollection)
                    .updateOne(
                      {
                        _id: parentID,
                      },
                      {
                        $addToSet: {
                          files: fileInsertRes.insertedId,
                        },
                      }
                    )
                    .then(() => {
                      resolve(fileInsertRes.insertedId);
                    })
                    .catch((err: Error) => {
                      reject(err);
                    });
                })
                .catch((err: Error) => {
                  reject(err);
                });
            } else {
              reject(new Error(`no note found with given id`));
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async deleteFile(
      parent: any,
      args: any,
      _info: any,
      _mergeInfo: any,
      updateParents: boolean = true
    ): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id'));
          return;
        }
        const fileID = new ObjectID(args.id);
        fileQueryMethods
          .file(parent, {
            id: args.id,
          })
          .then(file => {
            const deleteFile = () => {
              db.collection(fileCollection)
                .deleteOne({
                  _id: fileID,
                })
                .then(() => {
                  resolve(`deleted file ${file.id}`);
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            if (updateParents) {
              let collectionName: string;
              switch (file.parentType) {
                case noteType:
                  collectionName = noteCollection;
                  break;
                case toolType:
                  collectionName = toolCollection;
                  break;
                default:
                  reject(new Error('invalid parent type'));
                  return;
              }
              db.collection(collectionName)
                .updateOne(
                  {
                    _id: new ObjectID(file.parentID),
                  },
                  {
                    $pull: {
                      files: fileID,
                    },
                  }
                )
                .then(() => {
                  deleteFile();
                })
                .catch((err: Error) => {
                  reject(err);
                });
            } else {
              deleteFile();
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
