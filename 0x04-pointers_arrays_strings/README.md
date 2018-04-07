# 0x04. C - Pointers, arrays and strings

## Synopsis
This project covers:

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them

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

### holberton.h

Header file containing function prototypes.

### 0-reset_to_98.c

Function takes a pointer to an `int` as a parameter and updates the value it points to to `98`.

* Prototype: `void reset_to_98(int *n);`

### 1-swap.c

Function swaps the values of two integers.

* Prototype `void swap_int(int *a, int *b);`

### 2-strlen.c

Function returns the length of a string

* Prototype: `int _strlen(char *s);`

The standard library provides a similar function (`strlen`).

### 3-puts.c

Function prints a string, followed by a new line, to `stdout`.

* Prototype: `void _puts(char *str);`

The standard library provides a similar function (`puts`).

### 4-print_rev.c

Function pritns a string in reverse followed by a new line.

* Prototype: `void print_rev(char *s);`

### 5-rev_string.c

Function reverses a string.

* Prototype: `void print_rev(char *s);`

### 6-puts2.c

Function prints one char out of 2 of a string, followed by a new line.

* Prototype: `void puts2(char *str);`
* The function should print only one character out of two, starting with the first one

### 7-puts_half.c

Function prints half of a string followed by a new line.

* Prototype: `void puts_half(char *str);`
* The function should print the second half of the string
* If the number of characters is odd, the function should print the `(length_of_the_string - 1) / 2` last characters of the string

### 8-print_array.c

Function prints `n` elements of an array of integers, followed by a new line.

* Prototype: `void print_array(int *a, int n);`
* `n` is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* Allowed to use `printf`

### 9-strcpy.c

Function copies the string pointed to by `src`, including the termination null byte `(\0)`, to the buffer pointed to by `dest`.

* Prototype: `char *_strcpy(char *dest, char *src);`
* Return value: the pointer to `dest`

The standard library provides a similar function (`strcpy`).