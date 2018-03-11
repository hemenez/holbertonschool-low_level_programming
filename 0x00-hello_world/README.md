# 0x00. C - Hello, World

## Synopsis
This repository begins the first introduction to the C programming language.

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* C programs and functions must be compiled with gcc 4.8.4 using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory
* No more than 5 functions per file
* All our header files should be guarded

## Requirements for shell scripts
* Allowed editors, `vi`, `vim`, `emacs`
* All files must be compiled on Ubuntu 14.04 LTS
* All scripts should be exactly two lines long
* All files should end with a new line
* The first line of all files should be exactly `#!/bin/bash`

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox.


## Task Requirements
This repository contains the following files. Listed are the parameters of each task:

### 0-preprocessor

Write a script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

### 1-compiler

Write a script that compiles a C file but does not link.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`

### 2-assembler

Write a script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`

### 4-puts.c

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

* Use the function `puts`
* You are not allowed to use `printf`
* Your program should end with the value 0

### 3-name

Write a script that compiles a C file and creates an executable named cisfun.

* he C file name will be saved in the variable `$CFILE`

### 5-printf.c

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

* Use the function `printf`
* You are not allowed to use the function `puts`
* Your program should return 0
* Your program should compile without warning when using the `-Wall gcc` option

### 6-size.c

Write a C program that prints the size of various types on the computer it is compiled and run on.

* Warnings are allowed
* Your program should return 0
You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32 gcc` option

### 100-intel

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`

### 101-quote.c

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
* Your program should return 1
* Your program should compile without any warnings when using the `-Wall gcc` option