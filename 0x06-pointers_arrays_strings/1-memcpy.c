#include "holberton.h"
/**
 * *_memcpy - function will copy memory area
 * @dest: represents destination pointer
 * @src: represents source pointer
 * @n: represents max number of bytes to copy
 * Return: function will return destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
