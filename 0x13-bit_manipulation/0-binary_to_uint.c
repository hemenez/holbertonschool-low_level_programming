#include "holberton.h"
/**
 * binary_to_uint - function will write binary to int
 * @b: represents pointer to binary string
 * Return: function will return binary print-out
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int power;
	unsigned int sum;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0') /** loops through to end of string */
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--; /** accounts for decrement of null byte */
	sum = 0;
	power = 1; /** allows for first index to be undisturbed */
	while (i >= 0)
	{
		if (b[i] == '1')
			sum += power; /** only add if number is 1 */
		power *= 2; /** keep incrementing value of power (2^x) */
		i--; /** run back to beginning of string */
	}
	return (sum);
}
