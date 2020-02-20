[![JavaScript Style Guide](https://img.shields.io/badge/code_style-standard-brightgreen.svg)](https://standardjs.com)
# JavaScript Challenges
## Requirements
- Node 12.16.0 (Node 8 and above should also work)
- NPM 6.13.4 (The version that comes with yur Node should work too)

## Setup
Run `npm install` to install StandardJS coding standard plugin (for linting and formatting) and Jest for Test Driven Development tools.

## Dev environment
I'm using VS Code with WSL in Windows 10 with the StandardJS plugin.

You can test with:

`npx jest --noStackTrace nameOfFileYouWantToTest`

or

`npm test`

to run all tests

## Adding new challenges
To add a new challenge:
1. Create a new folder in `katas` with a name to identify that challenge.
2. Inside that folder, add the `*.js` and `*.test.js` files.
3. Add the source of the challenge in the main *.js file.
4. Write some tests and start with your solution!

**Pro Tip:** You can watch your tests with this command:

`npm run watch -- nameofFileYouWantToTest`

## Note
The plugin for StandardJS in VS Code can't recognize the package.json file unless it's on the root of the project. A quick solution for this would be to go to `File > Add Folder to Workspace...` and select the `javascript-challenges` folder.
