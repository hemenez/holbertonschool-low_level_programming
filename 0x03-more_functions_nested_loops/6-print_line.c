#include "holberton.h"
/**
 * print_line - function will draw a straight line a given number of times
 * @n: represents value given to us in main function
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
		_putchar('_');
		_putchar('\n');
}
