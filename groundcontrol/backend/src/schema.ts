import { gql } from 'apollo-server-express';

export default gql`
  type User {
    id: String!
    name: String!
    type: String!
    files: [ID!]!
  }
  type Tool {
    id: String!
    name: String!
    files: [ID!]!
    description: String!
  }
  type Mission {
    id: String!
    title: String!
    description: String!
    notes: [ID!]!
    tasks: [ID!]!
  }
  type Task {
    id: String!
    title: String!
    description: String!
    notes: [ID!]!
    tasks: [ID!]!
    parentID: String!
    parentType: String!
  }
  type Note {
    id: String!
    title: String!
    message: String!
    files: [ID!]!
    parentID: String!
    parentType: String!
  }
  type File {
    id: String!
    name: String!
    mime: String!
    encoding: String!
  }
  type Query {
    hello: String!
    mission(id: ID!): Mission!
    missions(perpage: Int!, page: Int!): [Mission]!
    note(id: ID!): Note!
    notes(parentID: ID, parentType: String, perpage: Int!, page: Int!): [Note]!
    task(id: ID!): Task!
    tasks(parentID: ID, parentType: String, perpage: Int!, page: Int!): [Task]!
    file(id: ID!): File!
    user(id: ID): User!
    users(type: String, mission: String): [Users!]!
  }
  type Mutation {
    addUser(token: String!, name: String!, type: String!): String!
    addMission(title: String!, description: String!): String!
    addNote(
      title: String!
      message: String
      parentID: ID!
      parentType: String!
    ): String!
    addTool(name: String!, description: String): String!
    addTask(
      title: String
      description: String
      parentID: ID!
      parentType: String!
    ): String!
    addFile(parentType: String!, parentID: ID!, file: Upload!): String!
    updateMission(id: ID!, title: String, description: String): String!
    updateNote(id: ID!, title: String, message: String): String!
    updateTool(id: ID!, name: String, description: String): String!
    updateTask(
      id: ID!
      title: String
      description: String
      parentID: ID
      parentType: String
      index: Int
    ): String!
    deleteMission(id: ID!): String!
    deleteNote(id: ID!): String!
    deleteTask(id: ID!): String!
    deleteFile(id: ID!): String!
    deleteTool(id: ID!): String!
  }
`;
