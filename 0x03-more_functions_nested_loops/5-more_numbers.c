#include "holberton.h"
/**
 * more_numbers - function will print 0-14 ten times with a new line
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (b == 1 && c == 5)
				{
					break;
				}
				{
				if (b != 0)
					_putchar(b + '0');
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
