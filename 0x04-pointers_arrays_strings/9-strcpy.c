#include "holberton.h"
/**
 * *_strcpy - function will copy a string from one pointer to another
 * Return: function will return string to dest
 * @dest: represents pointer that will receive the copied string
 * @src: represents pointer that holds the string to be copied
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
