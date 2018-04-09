# 0x1A. C - Sorting algorithms & Big O

## Synopsis
This project covers:

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded
* Not allowed to use global variables
* Unless specified otherwise, you are not allowed to use the standard library.

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## Authors
Lindsey Hemenez: 252@holbertonschool.com
Raman Hundal 151@holbertonschool.com

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### sort.h

Header file containing all function prototypes

### print_array.c

Prints an array of integers

### print_list.c

Prints a list of integers

### 0-bubble_sort.c

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

* Prototype: `void bubble_sort(int *array, size_t size);`
* You’re expected to print the array after each time you swap two elements

### 0-O

Write the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 1-insertion_sort_list.c

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

* Prototype: `void insertion_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the list after each time you swap two elements

### 1-O

Write the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 2-selection_sort.c

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

* Prototype: `void selection_sort(int *array, size_t size);`
* You’re expected to print the array after each time you swap two elements

### 2-O

Write the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 3-quick_sort.c

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: `void quick_sort(int *array, size_t size);`
* You must implement the `Lomuto` partition scheme
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the array after each time you swap two elements

### 3-O

Write the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 4-O through 21-O

Various questions asked by the staff of the Holberton School about time complexities of certain functions