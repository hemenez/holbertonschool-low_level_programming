#include "holberton.h"
/**
* print_number - function will print numbers no matter their value
* @n: represents value given to us in main function
*/

void print_number(int n)
{
	int divisor;
	int num;
	int count;

	num = n;
	divisor = 1;

	if (n < 0)
	{
		n = -n;
		num = -num;
		_putchar('-');
	}
	for (count = 0; n / 10 > 0; count++)
	{
		n = n / 10;
		divisor = divisor * 10;
	}
	while (count > 0)
	{
		_putchar(num / divisor + '0');
		num = num % divisor;
		divisor = divisor / 10;
		--count;
	}
	_putchar(num + '0');
}
