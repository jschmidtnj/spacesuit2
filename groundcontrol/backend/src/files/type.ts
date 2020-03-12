export default interface IFile {
  id?: string;
  parentID: string;
  parentType: string;
  name: string;
  mime: string;
  encoding: string;
}
