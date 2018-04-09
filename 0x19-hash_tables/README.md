# 0x19. C - Hash tables

## Synopsis
This project covers:

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded
* Not allowed to use global variables
* You are allowed to use the standard library

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### hash_tables.h

Header file contains all function prototypes and data structure definitions

### 0-hash_table_create.c

Write a function that creates a hash table.

* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  * `size` is size of array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return `NULL`

### 1-djb2.c

Write a hash function implementing the djb2 algorithm.

* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* You are allowed to copy and paste the function from [this page](http://www.cse.yorku.ca/~oz/hash.html)

### 2-key_index.c

Write a function that gives you the index of a key.

* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
  * `key` is key
  * `size` is size of array of hash table
* This function should use the `hash_djb2` function
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

### 3-hash_table_set.c

Write a function that adds an element to the hash table.

* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
  * `ht` is the hash table you want to add or update the key/value to
  * `key` is the key and cannot be empty
  * `value` is value associated with the key. it can be empty
* Returns: `1` if succeeded, `0` otherwise
* In case of collision, add the new node at the beginning of the list

### 4-hash_table_get.c

Write a function that retrieves a value associated with a key.

* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
  * `ht` is hash table you want to look into
  * `key` is the key you are looking for
* Returns the value associated with the element, or `NULL` if `key` couldn’t be found

### 5-hash_table_print.c

Write a function that prints a hash table.

* Prototype: `void hash_table_print(const hash_table_t *ht);`
* You should print the key/value in the order that they appear in the array of hash table
  * Order: array, list
* If `ht` is NULL, don't print anything

### 6-hash_table_delete.c

Write a function that deletes a hash table.

* Prototype: `void hash_table_delete(hash_table_t *ht);`