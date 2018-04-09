# 0x16. C - Doubly linked lists

## Synopsis
This project covers:

* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

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
* Only allowed to use functions from stdlib like `malloc`, `free`, `printf`, and `exit`

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### lists.h

Header file contains all function prototypes and data structure definitions

### 0-print_dlistint.c

Write a function that prints all the elements of a `dlistint_t` list.

* Prototype: `size_t print_dlistint(const dlistint_t *h);`
* Return: the number of nodes

### 1-dlistint_len.c

Write a function that returns the number of elements in a linked `dlistint_t` list.

* Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2-add_dnodeint.c

Write a function that adds a new node at the beginning of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 3-add_dnodeint_end.c

Write a function that adds a new node at the end of a `dlistint_t` list.

* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 4-free_dlistint.c

Write a function that free a `dlistint_t` list.

* Prototype: `void free_dlistint(dlistint_t *head);`

### 5-get_dnodeint.c

Write a function that returns the nth node of a `dlistint_t` linked list.

* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
* `index` is the index of the node, starting from `0`
* if the node does not exist, return `NULL`

### 6-sum_dlistint.c

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

* Prototype: `int sum_dlistint(dlistint_t *head);`
* If the list is empty, return `0`

### 7-insert_dnodeint.c

Write a function that inserts a new node at a given position.

* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
* `idx`  is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* f it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### 8-delete_dnodeint.c

Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
* `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed
