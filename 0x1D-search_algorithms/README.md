# 0x1D. C - Search Algorithms

## Synopsis
This project covers:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded
* Not allowed to use global variables
* You are only allowed to use the `printf` function of the standard library.

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### search_algos.h

Header file containing all function prototypes.

### 0-linear.c


Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search).

* Prototype: `int linear_search(int *array, size_t size, int value);`
* `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* `value` is the value to search for
* Your function must return the first index where `value` is located
* If `value` is not present in `array` or if `array` is `NULL`, function must return `-1`
* Every time you compare a value in the array to the value you are searching, you have to print this value

### 1-binary.c


Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm).

* Prototype: `int binary_search(int *array, size_t size, int value);`
* `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* `value` is the value to search for
* Your function must return the first index where `value` is located
* You can assume that `array` will be sorted in ascending order
* You can assume that `value` won't appear more than once in `array`
* If `value` is not present in `array` or if `array` is `NULL`, function must return `-1`
* You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) 

### 2-O

What is the time complexity (worst case) of a linear search in an array of size `n`?

### 3-O

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`?

### 4-O

What is the time complexity (worst case) of a binary search in an array of size `n`?

### 5-O

What is the space complexity (worst case) of a binary search in an array of size `n`?

### 6-O

What is the space complexity of this function / algorithm? (given by Holberton School)