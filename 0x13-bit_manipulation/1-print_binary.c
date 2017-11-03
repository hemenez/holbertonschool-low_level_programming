#include "holberton.h"
/**
 * print_binary - function will print int as binary representation
 * @n: represents number fed from main
 * Return: function returns void
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /** recursively iterate until last digit is 1 */
		print_binary(n >> 1);
	if (n & 1) /** if number going back up level compares to one, print 1 */
		_putchar('1');
	else /** if number going back up level does not compare, print zero */
		_putchar ('0');
}
