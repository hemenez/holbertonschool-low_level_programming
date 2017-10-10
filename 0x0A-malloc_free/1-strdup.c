#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function will calculate length of string
 * @s: represents string
 * Return: function will return string length
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

/**
 * _strcpy - function will copy one string to another
 * @dest: represents destination string
 * @src: represents source string
 * Return: function will return destination string
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	return (dest);
}

/**
 * _strdup - function will return pointer to copied string
 * @str: represents string to be copied
 * Return: function will return destination string
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(_strlen(str) + 1);
	if (ptr != NULL)
		_strcpy(ptr, str);
	return (ptr);
}
