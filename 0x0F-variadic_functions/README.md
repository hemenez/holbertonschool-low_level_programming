# 0x0F. C - Variadic functions

## Synopsis
This project covers:

* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

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
* Only allowed to use functions from stdlib like `malloc`, `free`, and `exit`

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### variadic_functions.h

Header file containing function prototypes

### 0-sum_them_all.c

Write a function that returns the sum of all its parameters.

* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`

### 1-print_numbers.c

Write a function that prints numbers, followed by a new line.

* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* `separator` is the string to be printed between numbers
* You are allowed to use `printf`
* If `separator` is `NULL`, don't print it
* Print a new line at the end of your function

### 2-print_strings.c

Write a function that prints strings, followed by a new line.

* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* `separator` is the string to be printed between the strings
* `n` is the number of strings passed to the function
* You are allowed to use `printf`
* If separator is NULL, don’t print it
* If one of the string is NULL, print `(nil)` instead
* Print a new line at the end of your function

### 3-print_all.c

Write a function that prints anything.

* Prototype: `void print_all(const char * const format, ...);`
* `format` is a list of types of args passed to the function
  * `c`: `char`
  * `i`: `int`
  * `f`: `float`
  * `s`: `char *`
  * any other char should be ignored
* Not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
* You are allowed to use `printf`
