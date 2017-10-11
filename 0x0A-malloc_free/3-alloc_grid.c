#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function will return pointer to 2-D array
 * @width: represents width value
 * @height: represents height value
 * Return: function will return pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(width * sizeof(int));
			if (ptr[i] == NULL)
				return (NULL);
			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);
}
