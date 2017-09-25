#include "holberton.h"
#include <stdio.h>
/**
 * main - function will print Fibonacci sequence of even-valued terms
 * Return: function will return zero if compiled properly
 */

int main(void)
{
	long a;
	long b;
	long c;
	long sum;
	int count;

	a = 1;
	b = 2;
	sum = 2;
	for (count = 0; count <= 29; count++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum = sum + c;
	}
	printf("%lu\n", sum);
	return (0);
}
