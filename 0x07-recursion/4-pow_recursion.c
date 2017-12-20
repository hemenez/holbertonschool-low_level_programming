#include "holberton.h"
/**
 * _pow_recursion - function will return exponential value
 * @x: represents number to be multiplied
 * @y: represents power to be multiplied by
 * Return: function will return value of exponential equation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
