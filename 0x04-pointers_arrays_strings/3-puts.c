#include "holberton.h"
/**
 * _puts - function will print a string
 * @str: represents address given from main function
 */

void _puts(char *str)
{
	int tester;

	tester = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		tester++;
	}
	_putchar('\n');
}
