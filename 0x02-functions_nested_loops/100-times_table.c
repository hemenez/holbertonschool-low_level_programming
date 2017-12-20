#include "holberton.h"
/**
 * digit_tester - function will test and print numbers on digit size
 * @n: number given from main file
 * @column: number generated from second for loop
 * @product: result given from multiplying column and row
 */
void digit_tester(int n, int column, int product)
{
	if (product > 99)
	{
		_putchar(' ');
		_putchar(product / 100 + '0');
		_putchar((product / 10) % 10 + '0');
		_putchar(product % 10 + '0');
	}
	else if (product > 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
	}
	else
	{
		if (column != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(product + '0');
		}
		else
			_putchar('0');
	}
	if (column != n)
		_putchar(',');
}

/**
 * print_times_table - program will print a number's timetable
 * @n: represents variable given in main function
 */

void print_times_table(int n)
{
	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			if (n < 16 && n >= 0)
				digit_tester(n, column, product);
		}
		if (n < 16 && n >= 0)
			_putchar('\n');
	}
}
