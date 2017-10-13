#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function will allocate memory for an array
 * @nmemb: represents number of elements
 * @size: represents size of bytes
 * Return: function will return memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
