# `project` command line tool
Turn a directory into a "project" which allows you to:
- add logs to the project;
- maintain documentation and meta-data about the project;
- keep track of above changes;
- all without touching the content of the directory.

Also, gives you visibility on the most recently accessed projects on your machine.

# Usecases
- Maintain a simple TODO list for the current directory(project).
- Store passwords and other sensitive information about a directory without touching the content of the directory. (Perfect for collaborative git respositories. No more messy .gitignore!)
- Keep track of the history of a project to remember the context very quickly in the next visit.

# Available commands
Here are some useful available commands. For the list of all commands run `project help`
```
$ project dirs
```
Displays a list of recently accessed projects.

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
$ project exec bash
```
Opens sub-shell in the metadata directory.
Some potential usecases:
- Adding extra files to project metadata. e.g. cert keys, logos, etc.
- Manupulating the log file directly.
- Run git command against the "project data repository" (@see 'How it works' section on this document.).
You can run `exit` to get back.

```
$ project exec [command]
```
Runs a command under the metadata directory. @see above for more information.
Example: `project exec git log`

```
$ project rm
```
Removes all metadata about the project, except for the access log.


# How it works
All metadata about a project is kept at a corrsosponding directory under `~/.project/data`. Thid directory is maintained via git to help with ensuring data-integrity.

# Extend
All metadata about your projects (logs, documentation and access log) is available in form of a git repository. Build on top of it!
Here is a sample idea to get you started:
Alter your command prompt (PS1) to indicate current directory is a project!
