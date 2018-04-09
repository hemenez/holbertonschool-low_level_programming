# 0x12. C - More singly linked lists

## Synopsis
This project covers:

* How to use linked lists
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
* Only allowed to use functions from stdlib like `malloc`, `free`, and `exit`

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### lists.h

Header file contains all function prototypes and data structure definitions

### 0-print_listint.c

Write a function that prints all the elements of a `listint_t` list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* You are allowed to use `printf`

### 1-listint_len.c

Write a function that returns the number of elements in a linked listint_t list.

* Prototype: `size_t listint_len(const listint_t *h);`

### 2-add_nodeint.c

Write a function that adds a new node at the beginning of a `listint_t` list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 3-add_nodeint_end.c

Write a function that adds a new node at the end of a `listint_t` list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

### 4-free_listint.c

Write a function that frees a `listint_t` list.

* Prototype: `void free_listint(listint_t *head);`

### 5-free_listint2.c

Write a function that frees a `listint_t` list.

* Prototype: `void free_listint2(listint_t **head);`
* The function sets `head` to `NULL`

### 6-pop_listint.c

Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

* Prototype: `int pop_listint(listint_t **head);`
* If the linked list is empty, return `0`

### 7-get_nodeint.c

Write a function that returns the nth node of a `listint_t` linked list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`

### 8-sum_listint.c

Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

* Prototype: `int sum_listint(listint_t *head);`
* If the list is empty, return `0`

### 9-insert_nodeint.c

Write a function that inserts a new node at a given position.

* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx` , do not add the new node and return `NULL`

### 10-delete_nodeint.c

Write a function that deletes the node at index `index` of a `listint_t` linked list.

* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: `1` if it succeeded, `-1` if it failed