import { gql } from 'apollo-server-express';

export default gql`
  type File {
    ID: String!
    name: String
    description: String
    width: Int
    height: Int
  }
  type Task {
    ID: String!
    title: String!
    description: String!
    files: [String!]!
    subtasks: [ID!]!
  }
  type Query {
    hello: String!
  }
`;
