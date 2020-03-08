import { gql } from 'apollo-server-express';

export default gql`
  type Mission {
    ID: String!
    title: String!
    description: String
    notes: [ID!]
  }
  type Task {
    ID: String!
    mission: ID!
    title: String!
    description: String!
    notes: [ID!]
    subtasks: [ID!]
    parentTask: String
  }
  type Note {
    ID: String!
    title: String!
    message: String
    files: [File!]
  }
  type File {
    ID: String!
    name: String
    description: String
    width: Int
    height: Int
  }
  type Query {
    hello: String!
    mission(id: ID!): Mission!
    missions(perpage: Int!, page: Int!): [Mission]!
    note(id: ID!): Note!
    notes(parentID: ID, parentType: String, perpage: Int!, page: Int!): [Note]!
    task(id: ID!): Task!
    tasks(parentID: ID, parentType: String, perpage: Int!, page: Int!): [Task]!
  }
  type Output {
    code: Int!
    message: String!
  }
  type Mutation {
    addMission(title: String!, description: String): Output!
    addNote(title: String!, message: String, files: [Upload!], parentID: ID, parentType: String)
    addTask(title: String, description: String, parentID: ID, parentType: String): Output!
    updateMission(id: ID!, title: String, description: String): Output!
    updateNote(id: ID!, title: String!, message: String, files: [Upload!], parentID: ID, parentType: String)
    updateTask(id: ID!, title: String, description: String, parentID: ID, parentType: String): Output!
    deleteMission(id: ID!): Output!
    deleteNote(id: ID!): Output!
    deleteTask(id: ID!): Output!
  }
`;
