#include "holberton.h"
/**
 * _isupper - function will check for uppercase characters
 * Return: function will return a one if character is uppercase
 * @c: variable represents value held within main file
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
