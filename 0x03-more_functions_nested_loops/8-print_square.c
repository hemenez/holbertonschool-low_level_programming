#include "holberton.h"
/**
 * print_square - function will print squares based on specific value given
 * @size: represents value given in main function
 */

void print_square(int size)
{
	int width;
	int length;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (width = 0; width < size; width++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
