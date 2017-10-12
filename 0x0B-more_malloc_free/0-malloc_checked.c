#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function will allocate memory with malloc
 * @b: represents variable to be allocated for
 * Return: function will return pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
