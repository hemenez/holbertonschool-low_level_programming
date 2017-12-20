#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function will calculate length of string
 * @s: represents string to be evaluated
 * Return: function will return length of string
 */

int _strlen(char *s)
{
	unsigned int length;

	if (s == NULL)
	{
		length = 0;
		return (length);
	}
	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * string_nconcat - function will concatenates two strings
 * @s1: represents first string from main
 * @s2: represents second string from main
 * @n: represents count for string two to go until
 * Return: function will return pointer to allocated space for string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int hold;
	unsigned int a, b, c;

	a = _strlen(s1);
	hold = a + n;
	ptr = malloc(sizeof(char) * hold + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			ptr[i] = s1[b];
			i++;
		}
	}
	if (s2 != NULL)
	{
		for (c = 0; n > 0 && s2[c] != '\0'; c++)
		{
			ptr[i] = s2[c];
			i++;
			n--;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
