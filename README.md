## Project Title: Simple Shell Implementation

### Description:

A Simple Shell Implementation is a software project that aims to create a basic Unix-like shell program, which provides a command-line interface for interacting with an operating system. The project involves building a minimalistic shell that allows users to execute commands, navigate the filesystem, and manage processes.
[Simple Shell FlowChart.drawio.pdf](https://github.com/JeffKirui/printf/files/12658042/Simple.Shell.FlowChart.drawio.pdf)

### Key Features:

##Command Execution:
The simple shell allows users to execute various system commands, such as running programs, listing files, and performing basic operations like copying and moving files.
##Shell Prompt:
It provides a user-friendly shell prompt where users can enter commands. The prompt typically displays the current working directory, username, and hostname.
##Built-in Commands:
The shell includes support for built-in commands like cd (change directory) and exit (terminate the shell), which are executed by the shell itself rather than spawning external processes.
##Redirection and Piping:
The shell supports input and output redirection, allowing users to read from and write to files. Additionally, users can create pipelines to pass the output of one command as input to another.

### Requirements
### General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    Your shell should not have any memory leaks
    No more than 5 functions per file
    All your header files should be include guarded
    Use system calls only when you need to (why?)
    Write a README with the description of your project
    You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker

### List of allowed functions and system calls

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    _exit (man 2 _exit)
    fflush (man 3 fflush)
    fork (man 2 fork)
    free (man 3 free)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    getpid (man 2 getpid)
    isatty (man 3 isatty)
    kill (man 2 kill)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (__xstat) (man 2 stat)
    lstat (__lxstat) (man 2 lstat)
    fstat (__fxstat) (man 2 fstat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)

Authors: Geoffrey Kirui, Caroline Chepkoech
