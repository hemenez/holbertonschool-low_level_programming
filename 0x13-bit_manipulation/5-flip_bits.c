#include "holberton.h"
/**
 * flip_bits - function will return # of bits needed to flip
 * @n: represents first number fed from main
 * @m: represents second number fed from main
 * Return: function will return number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int holder;

	count = 0;
	holder = (n ^ m);
	while (holder > 0)
	{
		if (holder & 1)
			count++;
		holder = holder >> 1;
	}
	return (count);
}
