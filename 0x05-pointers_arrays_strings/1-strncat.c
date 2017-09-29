#include "holberton.h"
/**
* *_strncat - function will concatenate two strings
* @dest: represents final string
* @src: represents string that's used for appending
* @n: represents byte size fed through main function
* Return: function will return appended string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
