# 0x05. C - More pointers, arrays and strings

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

### 0-strcat.c

Write a function that concatenates two strings.

* Prototype: `char *_strcat(char *dest, char *src);`
* This function appends the `src` string to the	`dest` string, overwriting ht terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
* Returns a pointer to the resulting string `dest`

The standard library provides a similar function (`strcat`)

### 1-strncat.c

Write a function that concatenates two strings.

* Prototype `char *_strncat(char *dest, char *src, int n);`
* The `_strncat` functin is similar to the `_strcat` function, except that
  * it will use at most `n` bytes from `src` and
  * `src` does not need to be null-terminated if it contains `n` or more bytes
* Return a pointer to the resulting string `dest`

The standard library provides a similar function (`strncat`)

### 2-strncpy.c

Write a function that copies a string

* Prototype: `char *_strncpy(char *dest, char *src, int n);`
* Your function should work exactly like `strncpy`

The standard library provides a simialr function `strncpy`

### 3-strcmp.c

Write a fxn that compares two strings.

* Prototype: `int _strcmp(char *s1, char *s2);`

The standard library provides a similar function (`strcmp`)

### 4-rev_array.c

Write a function that reverses the content of an array of integers.

* Prototype: `void reverse_array(int *a, int n);`
* Where `n` is the number of elements in the array

### 5-string_toupper.c

Write a function that changes all lowercase letters of a string to uppercase.

* Prototype: `char *string_toupper(char *);`

### 6-cap_string.c

Write a function that capitalizes all words of a string.

* Prototype: `char *cap_string(char *);`
* Separators of words: space, tabulation, new line, `, ; . ! ? " ( ) { }`

### 7-leet.c

Write a function that encodes a string into 1337.

* Letters `a` and `A` should be replaced by `4`
* Letters `e` and `E` should be replaced by `3`
* Letters `o` and `O` should be replaced by `0`
* Letters `t` and `T` should be replaced by `7`
* Letters `l` and `L` should be replaced by `1`
* Prototype: `char *leet(char *);`
* You can only use one `if` in your code
* You can only use two loops in your code
* You are not allowed to use `switch`
* You are not allowed to use any ternary operation

### 8-rot13.c

Write a function that encodes a string using rot13.

* Prototype: `char *rot13(char *);`
* You can only use one `if` statement once in your code
* You can only use two loops in your code
* You are not allowed to use `switch`
* You are not allowed to use any ternary operation