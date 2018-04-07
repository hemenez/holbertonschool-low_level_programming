# 0x03. C - More functions, more nested loops

## Synopsis
This project is a more in-depth look at loops, nested loops, and functions in C

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

### 0-isupper.c

Function checks for uppercase character.

* Prototype: `int _isupper(int c);`
* Returns `1` if `c` is uppercase
* Returns `0` otherwise

The standard library provides a similar function (`isupper`)

### 1-isdigit.c

Function checks for a digit (`0` through `9`).

* Prototype: `int _isdigit(int c);`
* Returns `1` if `c` is a digit
* Returns `0` otherwise

The standard library provides a similar function (`isdigit`).

### 2-mul.c

Function multiplies two integers.

* Prototype `int mul(int a, int b);`

### 3-print_numbers.c

Function prints the numbers `0` to `9` followed by a new line.

* Prototype: `void print_numbers(void);`
* Can only use `_putchar` twice in the code

### 4-print_most_numbers.c

Function prints the numbers `0` to `9` followed by a new line.

* Prototype `void print_most_numbers(void);`
* Do not print `2` or `4`
* Can only use `_putchar` twice in the code

### 5-more_numbers.c

Function prints ten times the numbers from `0` to `14` followed by a new line.

* Prototype: `void more_numbers(void);`
* Can only use `_putchar` three times in the code

### 6-print_line.c

Function draws a straight line in the terminal.

* Prototype: `void print_line(int n);`
* Can only use `_putchar` function to print
* `n` is the number of times the character `_` should be printed
* The line should end with a `\n`
* If `n` is `0` or less, the function should only print `\n`

### 7-print_diagonal.c

Function draws a diagonal line on the terminal.

* Prototype: `void print_diagonal(int n);`
* Can only use `_putchar` function to print
* `n` is the number of times the character `\` should be printed
* The diagonal should end with a `\n`
* If `n` is `0` or less, the function should only print a `\n`

### 8-print_square.c

Function prints a square, followed by a new line.

* Prototype: `void print_square(int size);`
* Can only use `_putchar` function to print
* `size` is the size of the square
* If `size` is `0` or less, the function should print only a new line
* Use the character `#` to print the square

### 9-fizz_buzz.c

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for the multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

* Each number or word should be separated by a space
* Standard library is allowed for this function

### 10-print_triangle.c

Function prints a triangle, followed by a new line.

* Prototype: `void print_triangle(int size);`
* Can only use `_putchar` function to print
* `size` is the size of the triangle
* If `size` is `0` or less, the function should print only a new line
* Use the character `#` to print the triangle

### 100-prime_factor.c

Prime factors of `1231952` are `2`, `2`, `2`, `2`, `37`, and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.

* Standard library is allowed for this function
* The program will be compiled with the following command: `gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm`

### 101-print_number.c

Function prints an integer.

* Prototype: `void print_number(int n);`
* You can only use `_putchar` function to print
* Not allowed to use `long`
* Not allowed to use arrarys or pointers
* Not allowed to hard-code special values