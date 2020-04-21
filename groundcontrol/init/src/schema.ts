import { gql } from 'apollo-server-express';

export default gql`
  type Query {
    hello: String!
    tokens: [String!]!
    validateToken(token: String!): Boolean!
  }
  type Mutation {
    addToken(token: String!): String!
    deleteToken(token: String!): String!
  }
`;
