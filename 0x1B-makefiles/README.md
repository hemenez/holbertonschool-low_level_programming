# 0x1B. C - Makefiles

## Synopsis
This project covers:

* What are makefiles
* When, why and how to use Makefiles
* What are a rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Requirements for C files
* Allowed editors: `vi`, `vim`, `emacs`
* OS Ubuntu 14.04 LTS
* Version of `gcc`: 4.8.4
* Version of `make`: GNU Make 3.81
* All of our files should end with a new line
* A `README.md` at the root of the folder of the project is mandatory

## Environment
The project was tested and compiled on `Ubuntu 14.04 (trusty64)` via Vagrant run through VirtualBox. Files used include [these](https://github.com/holbertonschool/0x1B.c)

## On the command line:

`make -f <your file>`

## File Descriptions
This repository contains the following files. Listed are the parameters of each task:

### 0-Makefile

Create your first Makefile.

Requirements:

* name of the executable `holberton`
* rules: `all`
  * The `all` rule binds your executable
* variables: none

### 1-Makefile

Requirements:

* name of the executable `holberton`
* rules: `all`
  * The `all` rule binds your executable
* variables: `CC`, `SRC`
  * `CC`: the compiler to be used
  * `SRC`: the `.c` files

### 2-Makefile

Requirements:

* name of the executable `holberton`
* rules: `all`
  * The `all` rule binds your executable
* variables: `CC`, `SRC`, `OBJ`, `NAME`
  * `CC`: the compiler to be used
  * `SRC`: the `.c` files
  * `OBJ`: the `.o` files
  * `NAME`: the name of the executable
* The `all` rule should recompile only the updated source files
* You are not allowed to have a list of all the `.o` files

### 3-Makefile

Requirements:

* name of the executable `holberton`
* rules: `all`, `clean`, `oclean`, `fclean`, `re`
  * The `all` rule binds your executable
  * The `clean` rule deletes all Emacs and Vim temporary files along with the executable
  * The `oclean` rule deletes the object files
  * The `fclean` rule deletes the Emacs temporary files, the executable, and the object files
  * The `re` rule forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  * `CC`: the compiler to be used
  * `SRC`: the `.c` files
  * `OBJ`: the `.o` files
  * `NAME`: the name of the executable
  * `RM`: the program to delete files
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never faile
* You are not allowed to have a list of all the `.o` files

### 4-Makefile

Requirements:

* name of the executable `holberton`
* rules: `all`, `clean`, `oclean`, `fclean`, `re`
  * The `all` rule binds your executable
  * The `clean` rule deletes all Emacs and Vim temporary files along with the executable
  * The `oclean` rule deletes the object files
  * The `fclean` rule deletes the Emacs temporary files, the executable, and the object files
  * The `re` rule forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  * `CC`: the compiler to be used
  * `SRC`: the `.c` files
  * `OBJ`: the `.o` files
  * `NAME`: the name of the executable
  * `RM`: the program to delete files
  * `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never faile
* You are not allowed to have a list of all the `.o` files