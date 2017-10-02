#include "holberton.h"
/**
 * *_strchr - function will locate a character in a string
 * @s: represents string fed from main function
 * @c: represents character to be located
 * Return: function will return first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			return ('\0');
		s++;
	}
	return (NULL);
}
