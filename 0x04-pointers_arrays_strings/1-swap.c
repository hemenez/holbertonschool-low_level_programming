#include "holberton.h"
/**
 * swap_int - function will swap the values of two integers
 * @a: represents pointer change of value from inputted function
 * @b: represents second pointer change of value from inputted function
 */

void swap_int(int *a, int *b)
{
	int c; /** Will act as a placeholder for a value */

	c = *a; /** Temporarily holds value for a when switched */
	*a = *b;
	*b = c;
}
