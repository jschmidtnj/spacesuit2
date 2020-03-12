export default interface ITask {
  id?: string;
  title: string;
  description: string;
  notes: [string?];
  tasks: [string?];
  parentID: string;
  parentType: string;
}
