#include "holberton.h"
/**
 * puts2 - function will print one char out of 2 chars in a string
 * @str: represents string inputted from main function
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
