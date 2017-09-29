#include "holberton.h"
/**
 * *_strcat - Function will concatenate two strings
 * @src: represents the string that will be added
 * @dest: represents the final appended string
 * Return: the function will return the final appended string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
