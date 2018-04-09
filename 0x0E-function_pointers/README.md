# 0x0E. C - Function pointers

## Synopsis
This project covers:

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

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

### function_pointers.h

Header file containing function prototypes.

### 0-print_name.c

Write a function that prints a name

* Prototype: `void print_name(char *name, void (*f)(char *));`

### 1-array_iterator.c

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* `size` is the size of the array
* `action` is a pointer to the function you need to use

### 2-int_index.c

Write a function that searches for an integer.

* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
* `size` is the number of elements in the `array`
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
* If no element matches, return `-1`
* If size <= `0`, return `-1`

### Using Variadic Functions

#### 3-calc.h

This file should contain all the function prototypes and data structures used by the program. 

#### 3-main.c

This file should contain your main function only.

* You are not allowed to code any other function that `main` in this file
* You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod` from the `main` function
* You have to use `atoi` to convert args to `int`
* You are not allowed to use any kind of loop

#### 3-op_functions.c

This file should contain the 5 following functions (not more):

* `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
* `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
* `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
* `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
* `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`

#### 3-get_op_func.c

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

* Prototype: `int (*get_op_func(char *s))(int, int);`
* `s` is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
* You are not allowed to use `switch` statements
* You are not allowed to use `for` or `do ... while` loops
* You are not allowed to use `goto`
* You are not allowed to use `else`
* You are not allowed to use more than one `if` statement in your code
* You are not allowed to use more than one `while` loop in your code
* If `s` does not match any of the 5 expected operators (`+ - * / &`), return `NULL`
* You are only allowed to declare those two variables in this function

#### Compilation and examples

`gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc`

`./calc 1 + 1`

Returns `2`

`./calc 1024 '*' 98`

Returns `100352`

`./calc 1024 '\*' 98`

Returns `Error`