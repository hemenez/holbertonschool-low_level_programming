#include "holberton.h"
/**
 * _abs - function will find absolute value of number
 * Return: function will return the absolute value of the number
 * @n: values that we are testing
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
