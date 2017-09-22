#include "holberton.h"
/**
* print_number - function will print numbers no matter their value
* @n: represents value given to us in main function
*/

void print_number(int n)
{
	if (n > 9 && n <= 99)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 99 && n <= 999)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
