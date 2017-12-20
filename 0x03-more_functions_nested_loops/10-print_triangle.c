#include "holberton.h"
/**
 * print_triangle - function will print version of inverted hashtag triangle
 * @size: represents size given to this function from the main function
 */

void print_triangle(int size)
{
	int vert;
	int hor;
	int spaces;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (vert = 0; vert < size; ver++)
		{
			for (hor = vert + 1; hor < size; hor++)
				_putchar('.');
			for (spaces = 0; spaces <= vert; spaces++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
