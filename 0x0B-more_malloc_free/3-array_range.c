#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function will return an array
 * @min: represents minimum value
 * @max: represents maximum value
 * Return: function will return pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

       if (min > max)
		return (NULL);
       ptr = malloc(sizeof(int) * max - min + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max ; i++)
		{
			ptr[i] = min;
			min++;
		}
	return (ptr);
}
