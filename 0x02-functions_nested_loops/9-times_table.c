#include "holberton.h"
/**
 * times_table - function will print the 9 times table
 */

void times_table(void)
{
	int row;
	int column;
	int x;

	{
		for (row = 0; row <= 9; row++)
		{
			for (column = 0; column <= 9; column++)
			{
				x = row * column;
				if (x > 9)
				{
					_putchar(x / 10 + '0');
					_putchar(x % 10 + '0');
				}
				else
				{
					if (column != 0)
						_putchar(' ');
					_putchar(x % 10 + '0');
				}
				if (column != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
