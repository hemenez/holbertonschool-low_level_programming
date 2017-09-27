#include "holberton.h"
/**
 * puts2 - function will print one char out of 2 chars in a string
 * @str: represents string inputted from main function
 */

void puts2(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str+=2;
		length++;
	}
	_putchar('\n');
}
