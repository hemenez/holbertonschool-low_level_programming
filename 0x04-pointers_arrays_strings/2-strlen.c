#include "holberton.h"

/**
 * _strlen - function will return the length of a string
 * Return: function will return zero if compiled correctly
 * @s: represents address given from main function
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
