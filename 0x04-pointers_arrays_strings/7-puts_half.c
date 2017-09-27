#include "holberton.h"
/**
 * puts_half - function will print last half of string
 * @str: represents string implemented from main function
 */

void puts_half(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	if (length % 2 != 0)
		length = (length - 1) / 2;
	else
		length = length / 2;
	str = str - length;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		length++;
	}
	_putchar('\n');
}
