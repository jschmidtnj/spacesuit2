export default interface IUser {
  id?: string;
  name: string;
  type: string;
  files: [string?];
  missions: [string?];
  suits: [string?];
}