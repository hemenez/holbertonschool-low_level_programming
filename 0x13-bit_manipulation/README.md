# 0x13. C - Bit manipulation

## Synopsis
This project covers:

* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

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

### 0-binary_to_uint.c

Write a function that converts a binary number to an `unsigned int`.

* Prototype: `unsigned int binary_to_uint(const char *b);`
* `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if:
  * there is one or more chars in the string `b` that is not `0` or `1`
  * `b` is `NULL`

### 1-print_binary.c

Write a function that prints the binary representation of a number.

* Prototype: `void print_binary(unsigned long int n);`
* You are not allowed to use arrays
* You are not allowed to use `malloc`
* You are not allowed to use the `%` or `/`

### 2-get_bit.c

Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* `index` is the index, starting from `0` of the bit you want to get
* Returns: the value of the bit at index `index` or `-1` if an error occurred

### 3-set_bit.c

Write a function that sets the value of a bit to `1` at a given index.

* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* `index` is the index, starting from `0` of the bit you want to get
* Returns: `1` if it worked, `-1` if an error occurred

### 4-clear_bit.c

Write a function that sets the value of a bit to `0` at a given index.

* Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
* `index` is the index, starting from `0` of the bit you want to get
* Returns `1` if it worked, or `-1` if an error occurred

### 5-flip_bits.c

Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
* You are not allowed to use the `%` or `/` operators