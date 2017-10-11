#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function will calculate string length
 * @s: represents string to be calculated
 * Return: function will return length
 */

int _strlen(char *s)
{
	int length;

	if (s == NULL)
		length = 0;
	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * str_concat - function will concatenate two strings
 * @s1: represents first string
 * @s2: represents second string
 * Return: function will return concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int hold;
	char *container;

	hold = _strlen(s1) + _strlen(s2);
	ptr = malloc(sizeof(char) * hold);
	container = ptr;
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*ptr = *s1;
		s1++;
		ptr++;
	}
	while (*s2 != '\0')
	{
		*ptr = *s2;
		s2++;
		ptr++;
	}
	*ptr = '\0';
	return (container);
}
