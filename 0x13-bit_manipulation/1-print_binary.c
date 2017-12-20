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
	if (n & 1) /** if number going back up level and one match, print 1 */
		_putchar('1');
	else /** if number going back up level does not match w/1, print zero */
		_putchar ('0');
}
