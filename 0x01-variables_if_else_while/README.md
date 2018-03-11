# 0x01. C - Variables, if, else, while

## Synopsis
This project is an introduction to variables, loops, and conditions

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### 0-positive_or_negative.c

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

* The output of the program should be:
  * The number, followed by
    * if the number is greater than 0: `is positive`
    * if the number is 0: `is zero`
    * if the number is less than 0: `is negative`
  * followed by a new line

### 1-last_digit.c

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

* The output of the program should be:
  * The string `Last digit of`, followed by
  * n, followed by
  * the string `is`, followed by
    * if n is greater than 5: the string `and is greater than 5`
    * if n is 0: the string `and is 0`
    * if n is less than 6 and not 0: the string `and is less than 6 and not 0`
  * followed by a new line

### 2-print_alphabet.c

Write a program that prints the alphabet in lowercase, followed by a new line.

* You can only use the `putchar` function
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 4-print_alphabt.c

Write a program that prints the alphabet in lowercase, followed by a new line.

* Print all the letters except `q` and `e`
* You can only use the `putchar` function
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 3-print_alphabets.c

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

* You can only use the `putchar` function
* All your code should be in the `main` function
* You can only use `putchar` three times in your code

### 5-print_numbers.c

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* All your code should be in the `main` function

### 6-print_numberz.c

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

* You are not allowed to use any variable of type `char`
* You can only use the `putchar` function
* You can only use `putchar` twice in your code
* All your code should be in the `main` function

### 7-print_tebahpla.c

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

* You can only use the `putchar` function
* All your code should be in the `main` function
* You can only use `putchar` twice in your code

### 8-print_base16.c

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

* You can only use `putchar` function three times in your code

### 9-print_comb.c

Write a program that prints all possible combinations of single-digit numbers.

* Numbers must be separated by a comma and space
* Numbers must be printed in ascending order
* You can only use `putchar` four times maximum
* You are not allowed to use any variable of type `char`

### 10-print_comb2.c

Write a program that prints the numbers from 00 to 99.

* Numbers must be separated by a comma and space
* Numbers must be printed in ascending order with two digits
* You can only use `putchar` five times maximum
* You are not allowed to use any variable of type `char`

### 100-print_comb3.c

Write a program that prints all possible different combinations of two digits.

### 101-print_comb4.c

Write a program that prints all possible different combinations of three digits.

* The three digits must be different

### 102-print_comb5.c

Write a program that prints all possible combinations of two two-digit numbers.

* Cannot repeat combinations of numbers