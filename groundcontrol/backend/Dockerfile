FROM node:13

# Create app directory
WORKDIR /app
# Install app dependencies
COPY package*.json ./
RUN yarn install --prod=true

COPY lib ./lib

CMD [ "npm", "start" ]
