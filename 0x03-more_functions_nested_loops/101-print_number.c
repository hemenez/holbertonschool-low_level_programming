#include "holberton.h"
#include <stdio.h>
/**
* print_number - function will print numbers no matter their value
* @n: represents value given to us in main function
*/

void print_number(int n)
{
	int divisor;
	int count;
	unsigned int val;
	unsigned int num;

	divisor = 1;
	num = n;

	if (n < 0)
	{
		num = -n;
		val = num;
		_putchar('-');
	}
	else
		val = num;
	for (count = 0; num / 10 > 0; count++)
	{
		num = num / 10;
		divisor = divisor * 10;
	}
	while (count > 0)
	{
		_putchar(val / divisor + '0');
		val = val % divisor;
		divisor = divisor / 10;
		--count;
	}
	_putchar(val + '0');
}
