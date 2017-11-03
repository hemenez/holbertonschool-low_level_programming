#include "holberton.h"
/**
 * set_bit - function will set specified bit to 1
 * @n: represents number to be changed
 * @index: represents index that number should be changed at
 * Return: function will return changed number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int spot;

	if (index > 63)
		return (-1);
	spot = 1;
	*n = *n | (spot << index);
	return (*n);
}
