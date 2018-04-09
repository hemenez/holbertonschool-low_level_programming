# 0x17. C - Dynamic libraries

## Synopsis
This project covers:

* What is a dymanic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage `nm`, `ldd`, `ldconfig`

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* Use Holberton's version of [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
* All our header files should be guarded
* Not allowed to use global variables
* You are not allowed to use the standard library

## Requirements for Bash scripts
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* All your files should end with a new line
* The first line of all your files should be exactly `#!/bin/bash`
* All your files must be executable

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### libholberton.so

Create the dynamic library libholberton.so containing all the functions listed below:

* `int _putchar(char c);`
* `int _islower(int c`);`
* `int _isalpha(int c);`
* `int _abs(int n);`
* `int _isupper(int c);`
* `int _isdigit(int c);`
* `int _strlen(char *s);`
* `void _puts(char *s);`
* `char *_strcpy(char *dest, char *src);`
* `int _atoi(char *s);`
* `char *_strcat(char *dest, char *src);`
* `char *_strncat(char *dest, char *src, int n);`
* `char *_strncpy(char *dest, char *src, int n);`
* `int _strcmp(char *s1, char *s2);`
* `char *_memset(char *s, char b, unsigned int n);`
* `char *_memcpy(char *dest, char *src, unsigned int n);`
* `char *_strchr(char *s, char c);`
* `unsigned int _strspn(char *s, char *accept);`
* `char *_strpbrk(char *s, char *accept);`
* `char *_strstr(char *haystack, char *needle);`

### holberton.h

Header file containing all function prototypes

### 1-create_dynamic_lib.sh

Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.