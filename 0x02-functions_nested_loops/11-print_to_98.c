#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - function will print all natural numbers from n to 98
 * @n: variable that holds testable value
 */

void print_to_98(int n)
{
	int v;

	v = n;

	if (v == 98)
		printf("%d", v);

	else
	{
	for (v = n; v > 97; v--)
	{
		if (v > 97)
			printf("%d", v);
		if (v != 98)
			printf(", ");
	}
	for (v = n; v < 99; v++)
	{
		if (v < 99)
			printf("%d", v);
		if (v != 98)
			printf(", ");
	}
	}
	printf("\n");
}
