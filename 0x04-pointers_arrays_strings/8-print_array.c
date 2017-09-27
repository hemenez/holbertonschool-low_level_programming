#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Function will print a given number of element's array of ints
 * @a: represents pointer to array
 * @n: represents given number of elements
 */

void print_array(int *a, int n)
{
	int length;

	*a = a[0];

	length = 0;
	while (length < n)
	{
		printf("%d", a[length++]);
		if (length != n)
			printf(", ");
	}
	printf("\n");
}
