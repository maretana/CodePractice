# Java Challenges
## Requirements
- JDK 11
- Apache Maven 3.6.0

## Dev environment
I'm using VS Code with WSL in Windows 10. VS Code allows to run tests directly from the editor, which is neat.

It is also possible to run individual tests from the terminal with `mvn test -Dtest=ClassNameOfTest` or `mvn test` to run all tests at once.

I also installed locally `openjdk-11-doc` to have access to the documentation. For this you will need a web server to navigate the docs.

I am using python3 to start a static server. Use `./run-javadoc.sh` and access the documentation at [localhost:8000](http://localhost:8000/api/index.html)

## Notes
I am using VS Code for development instead of more specialized tools like Eclipse or IntelliJ IDEA since it's lightweight (in comparisson), I already had it installed and
works great with WSL. Also note that the main objective here is to solve individual coding challenges and not developing and maintaining a large project with lots of resources. VS Code has great tools for Java that fit my needs for this repo so there was no need to look for something else.