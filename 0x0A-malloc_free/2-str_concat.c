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
	int i;

	hold = (_strlen(s1) + _strlen(s2) + 1);
	ptr = malloc(sizeof(char) * hold);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			ptr[i] = *s1;
			s1++;
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			ptr[i] = *s2;
			s2++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
