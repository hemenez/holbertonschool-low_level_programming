#include "holberton.h"
/**
 * factorial - function will return factorial of given number
 * @n: represents number to be analyzed
 * Return: function will return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
