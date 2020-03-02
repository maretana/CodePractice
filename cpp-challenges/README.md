# C/C++ Challenges

## Requirements
- Visual Studio 2019
- C++ workload for Visual Studio
- Google Test for Visual Studio

## Setup
Open this solution (`cpp-challenges.sln`) with Visual Studio 2019. It should auto-generate the IDE files. Be sure that NuGet packages are restored so that Google Test gets installed.

## Adding new challenges
It is recomended to use the "_Show All Files_" option in the solution explorer to group challenge files together in a folder for easier inspection outside of Visual Studio. Note that Visual Studio filters are also provided for an organized view in the default Solution Explorer.
1. Create a folder for the challenge
2. Add the **Source** and **Header** files.
3. Add the **Test** file.
4. Move the **Test** file from the **Sources** filter to the **Tests** filter.
5. Use Visual Studio's **Test Explorer** to run tests.
