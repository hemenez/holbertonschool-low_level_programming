#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	ptr = malloc(min * max * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= min; i++)
		for (j = 0; j <= max; j++)
			*ptr = 0;
	return (ptr);
}
