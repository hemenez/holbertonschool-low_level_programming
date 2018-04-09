# 0x0A. C - malloc, free

## Synopsis
This project covers:

* What is the difference between automatic and dynamic allocation
* What is `malloc` and `free` and how to use them
* Why and when use `malloc`
* How to use `valgrind` to check for memory leak

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
* The only C standard library functions allowed are `malloc` and `free`, no `realloc`, `calloc`, etc.

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### holberton.h

Header file containing function prototypes.

### 0-create_array.c

Write a function that creates an array of chars, and initializes it with a specific char.

* Prototype: `char *create_array(unsigned int size, char c);`
* Returns `NULL` if size = `0`
* Returns a pointer to the array, or `NULL` if fails

### 1-strdup.c

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

* Prototype: `char *_strdup(char *str);`
* The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
* Returns `NULL` if str = NULL
* On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

The standard library provides a similar function `strdup`.

### 2-str_concat.c

Write a function that concatenates two strings.

* Prototype: `char *str_concat(char *s1, char *s2);`
* The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2` and null terminated.
* If `NULL` is passed, treat it as an empty string
* The function should return `NULL` on failure

### 3-alloc_grid.c

Write a function that returns a pointer to a 2 dimensional array of integers.

* Prototype: `int **alloc_grid(int width, int height);`
* Each element of the grid should be initialized to `0`
* The function should return `NULL` on failure
* If `width` or `height` is `0` or negative, return `NULL`

### 4-free_grid.c

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

* Prototype: `void free_grid(int **grid, int height);`
* Your program should not crash if the grid is invalid (`NULL` or size = 0)

### 5-argstostr.c

Write a function that concatenates all the arguments of your program.

* Prototype: `char *argstostr(int ac, char **av);`
* Returns `NULL` if `ac == 0` or `av == NULL`
* Returns a pointer to a new string, or `NULL` if it fails
* Each argument should be followed by a `\n` in the new string