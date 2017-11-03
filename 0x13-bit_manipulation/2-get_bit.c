#include "holberton.h"
/**
 * get_bit - function will return value of bit at given index
 * @n: represents number fed from main
 * @index: represents index to be found
 * Return: function returns value of bit at specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int spot;

	if (!index && index != 0) /** if index does not exist */
		return (-1);
	spot = n >> index; /** moves to specified index */
	return (spot & 1);
}
