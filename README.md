# `project` command line tool
Turn a directory into a "project" which allows you to:
- add logs to the project;
- maintain documentation and meta-data about the project;
- keep track of above changes;
- all without touching the content of the directory.

Also, gives you visibility on the most recently accessed projects on your machine.

# Usecases
```
$ project init
```
Turns this directory into a 'project'

```
$ project log 'hosted on AWS'
```
Adds a log to the project.

```
$ project history
```
Displays all the logs with the date and time.

```
$ project document
```
Opens project documentation to edit. (a single text file in MD format)

```
$ project rm
```
Removes all metadata about the project, except for the access log.
