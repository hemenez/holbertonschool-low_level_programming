# 0x07. C - Recursion

## Synopsis
This project covers:

* What is recursion, and how to use it

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
* You are not allowed to use any kind of loops

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### holberton.h

Header file containing function prototypes.

### 0-puts_recursion.c

Write a function that prints a string, followed by a new line.

* Prototype: `void _puts_recursion(char *s);`

The standard library provides a similar function `puts`

### 1-print_rev_recursion.c

Write a function that prints a string in reverse.

* Prototype: `void _print_rev_recursion(char *s);`

### 2-strlen_recursion.c

Write a function that returns the length of a string.

* Prototype: `int _strlen_recursion(char *s);`

The standard library provides a similar function `strlen`

### 3-factorial.c

Write a function that returns the factorial of a given number.

* Prototype: `int factorial(int n);`
* If `n` is lower than `0`, the function should return `-1` to indicate an error
* Factorial of `0` is `1`

### 4-pow_recursion.c

Write a function that returns the value of `x` raised to the power of `y`.

* Prototype: `int _pow_recursion(int x, int y);`
* If `y` is lower than `0`, the function should return `-1`

The stnadard library provides a different function `pow`

### 5-sqrt_recursion.c

Write a function that returns the natural square root of a number.

* Prototype: `int _sqrt_recursion(int n);`
* If `n` does not have a natural square root, the function should return `-1`

The standard library provides a different function `sqrt`

### 6-is_prime_number.c

Write a function that returns `-1` if the input integer is a prime number, otherwise return `0`

* Prototype: `int is_prime_number(int n);`

### 7-is_palindrome.c

Write a function that returns `1` if a string is a palindrome and `0` if not.

* Prototype: `int is_palindrome(char *s);`
* An empty string is a palindrome