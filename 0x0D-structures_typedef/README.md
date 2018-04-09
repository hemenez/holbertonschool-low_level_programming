# 0x0D. C - Structures, typedef

## Synopsis
This project covers:

* What are structures, when, why and how to use them
* How to use `typedef`

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
* Can only use `malloc`, `free`, and `exit` from the standard library
* The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `dog.h`


## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### dog.h

Header file containing function prototypes.

Define a new type `struct dog` with the following elements:

* `name`, type = `char *`
* `age`, type = `float`
* `owner`, type = `char *`

Define a new type `dog_t` as a new name for the type `struct dog`.

### 1-init_dog.c

Write a function that initialize a variable of type `struct dog`

* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### 2-print_dog.c

Write a function that prints a `struct dog`

* Prototype: `void print_dog(struct dog *d);`
* You are allowed to use the standard library
* If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
* If `d` is `NULL` print nothing.

### 4-new_dog.c

Write a function that creates a new dog.

* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
* You have to store a copy of `name` and `owner`
* Return `NULL` if the function fails

### 5-free_dog.c

Write a function that frees dogs.

* Prototype: `void free_dog(dog_t *d);`