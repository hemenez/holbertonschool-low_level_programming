#include "holberton.h"
/**
 * clear_bit - function will set value of given bit to 0
 * @n: represents number to be changed
 * @index: represents index to be evaluated
 * Return: function will return 1 upon success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int spot;

	if (index > 63)
		return (-1);
	spot = 1;
	*n = *n & (~(spot << index));
	return (1);
}
