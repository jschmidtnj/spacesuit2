export default interface INote {
  id?: string;
  title: string;
  message: string;
  files: [string?];
  parentID: string;
  parentType: string;
}
