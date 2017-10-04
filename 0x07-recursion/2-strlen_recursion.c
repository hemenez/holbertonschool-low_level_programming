#include "holberton.h"
/**
 * _strlen_recursion - function will return length of string
 * @s: represents string being fed
 * Return: will return count
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (*s);
}
