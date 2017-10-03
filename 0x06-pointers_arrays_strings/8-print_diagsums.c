#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function will print sum of two diagonals
 * @a: represents array to be searched
 * @size: represents max size of array in a square
 * Return: nothing/void
 */

void print_diagsums(int *a, int size)
{
	int row;
	int col;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum1 = sum1 + *a;
			if (col == size - row - 1)
				sum2 = sum2 + *a;
		a++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
