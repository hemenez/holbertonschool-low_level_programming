# 0x0C. C - Preprocessor

## Synopsis
This project covers:

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

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
* Not allowed to use the standard use (functions ike `printf`, `puts`, etc.

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### 0-object_like_macro.h

Header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### 1-pi.h

Header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### 2-main.c

Write a program that prints the name of the file it was compiled from, followed by a new line.

* You are allowed to use the standard library

### 3-function_like_macro.h

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### 4-sum.h

Write a function-like macro `SUM(x, y`) that computes the sum of the numbers `x` and `y`.