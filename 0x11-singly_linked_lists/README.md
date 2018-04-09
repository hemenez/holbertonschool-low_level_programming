# 0x11. C - Singly linked lists

## Synopsis
This project covers:

* When and why using linked lists vs arrays
* How to build and use linked lists

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

### lists.h

Header file contains all function prototypes and data structure definitions

### 0-print_list.c

Write a function that prints all the elements of a `list_t` list.

* Prototype: `size_t print_list(const list_t *h);`
* Return: the number of nodes
* If `str` is `NULL`, print `[0] (nil)`
* You are allowed to use `printf`

### 1-list_len.c

Write a function that returns the number of elements in a linked `list_t` list.

* Prototype: `size_t list_len(const list_t *h);`

### 2-add_node.c

Write a function that adds a new node at the beginning of a `list_t` list.

* Prototype: `list_t *add_node(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use a `strdup`

### 3-add_node_end.c

Write a function that adds a new node at the end of a `list_t` list.

* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`

### 4-free_list.c

Write a function that frees a `list_t` list.

* Prototype: `void free_list(list_t *head);`

### 100-first.c

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed

* You are allowed to use `printf` function