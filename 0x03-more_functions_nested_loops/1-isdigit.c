#include "holberton.h"
/**
 * _isdigit - function will check value of a digit 0 through 9
 * @c: represents value given to us in main file
 * Return: function will return one if value is a digit 0 through 9
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
