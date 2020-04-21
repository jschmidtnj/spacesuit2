export default interface IMission {
  id?: string;
  title: string;
  description: string;
  notes: [string?];
  tasks: [string?];
  astronauts: [string?];
  groundcontrol: [string?];
  suits: [string?];
}