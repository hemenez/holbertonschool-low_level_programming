#include "holberton.h"
/**
 * print_last_digit - function will print last digit of number
 * @n: the value that will be tested
 * Return: function will return the absolute value of the modulo
 */

int print_last_digit(int n)
{
	int t;

	t = n % 10;

	if (t < 0)
		t = -t;
	_putchar(t + '0');
	return (t);
}
