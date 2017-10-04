#include "holberton.h"
/**
 * _print_rev_recursion - wrote a function to print string in reverse
 * @s: represents string fed from main function
 * Return: function will return upon null finding
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
