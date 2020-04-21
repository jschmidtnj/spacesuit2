import { gql } from 'apollo-server-express';

export default gql`
  type Diagnostics {
    suit: ID!
    date: Int!
    oxygen: Int!
    co2: Int!
  }
  type Suit {
    id: ID!
    name: String!
    user: ID!
    mission: ID!
  }
  type User {
    id: ID!
    name: String!
    type: String!
    files: [ID!]!
    missions: [ID!]!
    suits: [ID!]!
  }
  type Tool {
    id: ID!
    name: String!
    files: [ID!]!
    description: String!
  }
  type Mission {
    id: ID!
    title: String!
    description: String!
    notes: [ID!]!
    tasks: [ID!]!
    astronauts: [ID!]!
    groundcontrol: [ID!]!
    suits: [ID!]!
  }
  type Task {
    id: ID!
    title: String!
    description: String!
    notes: [ID!]!
    tasks: [ID!]!
    parentID: ID!
    parentType: String!
  }
  type Note {
    id: ID!
    title: String!
    message: String!
    files: [ID!]!
    parentID: ID!
    parentType: String!
  }
  type File {
    id: ID!
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
    users(type: String, mission: String, perpage: Int!, page: Int!): [Users!]!
    diagnostics(suit: ID!, startDate: Int, endDate: Int, perpage: Int!, page: Int!): [Diagnostics!]!
    tool(id: ID!): Tool!
    tools(perpage: Int!, page: Int!): [Tool!]!
    suit(id: ID!): Suit!
    suits(mission: ID!, perpage: Int!, page: Int!): [Suit!]!
  }
  type Mutation {
    addSuit(token: String!, name: String!, mission: ID!, user: ID!): String!
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
    addUserToMission(token: String!, user: ID!, mission: ID!): String!
    updateSuit(suit: ID!, user: ID, name: String, mission: ID): String!
    updateUser(name: String, type: String): String!
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
    deleteUser(token: String!, id: ID!): String!
    deleteSuit(id: ID!): String!
  }
`;
