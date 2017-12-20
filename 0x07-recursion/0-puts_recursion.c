#include "holberton.h"
/**
 * _puts_recursion - function will print a string followed by new line
 * @s: represents string fed from main function
 * Return: function will return when null character found
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
	_puts_recursion(s + 1);
}
