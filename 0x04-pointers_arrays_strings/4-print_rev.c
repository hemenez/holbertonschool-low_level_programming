#include "holberton.h"
/**
 * print_rev - function will print a string in reverse
 * @s: represents string provided in main function
 */

void print_rev(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	length = 63;
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
