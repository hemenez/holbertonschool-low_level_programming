#include "holberton.h"
/**
 * tester - function will test if number is prime
 * @n: represents value fed from prime function
 * @x: represents divisor to be used
 * Return: function will return 1 if value is prime or 0 if not
 */

int tester(int n, int x)
{
	if (n <= 1)
		return (0);
	else if ((n % x == 0) && (n / 2 > x))
		return (0);
	else if ((n / 2 < x) && (n % x != 0))
		return (1);
	return (tester(n, x + 1));
}

/**
 * is_prime_number - function will decide whether input integer is prime
 * @n: represents value fed from main function
 * Return: function will return calculated value from helper function
 */

int is_prime_number(int n)
{
	int x;
	int hold;

	x = 2;

	hold = tester(n, x);
	return (hold);
}
