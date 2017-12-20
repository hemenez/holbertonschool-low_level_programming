#include "holberton.h"
/**
 * print_diagonal - function will print diagonal linen in terminal
 * @n: represents the value given to us in the main function
 */

void print_diagonal(int n)
{
	int count;
	int a;

	for (count = 0; count < n; count++)
	{
		for (a = 0; a < count; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
