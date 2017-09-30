#include "holberton.h"
/**
 * *_strncpy - wrote a function that copies a string
 * @dest: Represents destination variable
 * @src: Represents variable that is having work done to it
 * @n: Represents max byte size fed from main function
 * Return: function will return destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
		dest[a] = '\0';
	return (dest);
}
