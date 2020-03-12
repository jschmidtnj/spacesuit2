import { Db, ObjectID } from 'mongodb';
import { missionType, noteCollection, taskType } from '../vars';
import INote from './type';

export default (db: Db) => {
  return {
    async notes(_: any, args: any): Promise<INote[]> {
      return new Promise<INote[]>((resolve, reject) => {
        const filter: any = {};
        if (args.parentID && args.parentType) {
          if (![missionType, taskType].includes(args.parentType)) {
            reject(new Error('invalid parent type given'));
            return;
          }
          filter.parentType = args.parentType;
          filter.parentID = args.parentID;
        }
        db.collection(noteCollection)
          .find(filter, {
            limit: args.perpage,
            skip: (args.page + 1) * args.perpage,
          })
          .toArray()
          .then((notePrimitive: any[]) => {
            if (!notePrimitive) {
              reject(new Error('no notes found'));
            }
            const notes: INote[] = [];
            notePrimitive.forEach(notePrim => {
              notePrim.id = notePrim._id;
              delete notePrim._id;
              notes.push(notePrim as INote);
            });
            resolve(notes);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
    async note(_: any, args: any): Promise<INote> {
      return new Promise<INote>((resolve, reject) => {
        if (!ObjectID.isValid(args.id)) {
          reject(new Error('invalid id provided'));
          return;
        }
        db.collection(noteCollection)
          .findOne({
            _id: new ObjectID(args.id),
          })
          .then((note: INote) => {
            if (!note) {
              reject(new Error('no note found'));
            }
            note.id = args.id;
            resolve(note);
          })
          .catch((err: Error) => {
            reject(err);
          });
      });
    },
  };
};
