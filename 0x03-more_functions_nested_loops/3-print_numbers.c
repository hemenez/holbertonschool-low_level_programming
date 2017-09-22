#include "holberton.h"
/**
 * print_numbers - function will print numbers 0 through 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
	_putchar('\n');
}
