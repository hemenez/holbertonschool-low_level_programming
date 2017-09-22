#include "holberton.h"

/**
 * print_sign - program will print sign of a number
 * Return: - program will return 1 if pos, -1 if neg, 0 if zero
 * @n: value of number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
