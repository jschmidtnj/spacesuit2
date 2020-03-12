import { Db, ObjectID } from 'mongodb';
import fileMutations from '../files/mutations';
import { noteCollection, toolCollection } from '../vars';
import toolQueries from './queries';
import ITool from './type';

export default (db: Db) => {
  const toolQueryMethods = toolQueries(db);
  const fileMutationMethods = fileMutations(db);
  return {
    async addTool(_: any, newNote: ITool): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        newNote.files = [];
        db.collection(toolCollection)
          .insertOne(newNote)
          .then(toolInsertRes => {
            resolve(toolInsertRes.insertedId);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async updateNote(_: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        const updateData: any = {};
        let foundUpdate = false;
        if (args.name) {
          updateData.name = args.name;
          foundUpdate = true;
        }
        if (args.description) {
          updateData.description = args.description;
          foundUpdate = true;
        }
        if (!foundUpdate) {
          reject(new Error('no updates found'));
          return;
        }
        db.collection(noteCollection)
          .updateOne(
            {
              _id: new ObjectID(args.id),
            },
            {
              $set: updateData,
            }
          )
          .then(() => {
            resolve(`updated tool ${args.id}`);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async deleteNote(parent: any, args: any): Promise<string> {
      return new Promise<string>((resolve, reject) => {
        toolQueryMethods
          .tool(parent, {
            id: args.id,
          })
          .then(tool => {
            const toolID = new ObjectID(tool.id);
            const deleteTool = () => {
              db.collection(toolCollection)
                .deleteOne({
                  _id: toolID,
                })
                .then(() => {
                  resolve(`deleted note ${args.id}`);
                })
                .catch((err: Error) => {
                  reject(err);
                });
            };
            for (let i = 0; i < tool.files.length; i++) {
              fileMutationMethods
                .deleteFile(
                  parent,
                  {
                    id: tool.files[i],
                  },
                  null,
                  false
                )
                .then(() => {
                  if (i === tool.files.length - 1) {
                    deleteTool();
                  }
                })
                .catch((err: Error) => {
                  reject(err);
                  return;
                });
            }
            if (tool.files.length === 0) {
              deleteTool();
            }
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
