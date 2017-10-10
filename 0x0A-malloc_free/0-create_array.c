#include <stdio.h>
#include <stdlib.h>
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

	ptr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
	free(ptr);
}
