#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"
/**
 * create_array - function will create an array of chars
 * @size: represents size of array
 * @c: represents specific char to be initialized
 * Return: function will return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
