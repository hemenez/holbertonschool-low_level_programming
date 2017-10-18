#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function will print a name
 * @name: represents name to be printed
 * @f: represents pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
