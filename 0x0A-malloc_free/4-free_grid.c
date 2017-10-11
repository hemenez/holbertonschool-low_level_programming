#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function will fee memory from 2-D grid
 * @grid: represents pointer to array that is being feed
 * @height: represents size that is index is evaluated at
 * Return: function will return nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
