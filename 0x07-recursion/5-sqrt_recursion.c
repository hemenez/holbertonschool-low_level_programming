#include "holberton.h"
/**
 * helper - function will find square root of n
 * @n: represents number to be evaluated
 * @z: represents number that will square
 * Return: function will return sq root or -1 if doesn't exist
 */

int helper(int n, int z)
{
	if ((z * z) == n)
		return (z);
	if ((z * z) > n)
		return (-1);
	return (helper(n, z + 1));
}

/**
 * _sqrt_recursion - function will print natural sq root of number
 * @n: represents value fed from main function
 * Return: function will return natural square root
 */


int _sqrt_recursion(int n)
{
	int hold;
	int z;

	z = 1;

	if (n < 0)
		return (-1);
	hold = helper(n, z);
	return (hold);
}
