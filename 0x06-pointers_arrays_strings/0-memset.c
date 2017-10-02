#include "holberton.h"
/**
 * *_memset - function will fill memory with a constant byte
 * @s: represents string fed from function
 * @b: represents constant byte to replace string
 * @n:represents number of bytes to fill to
 * Return: function will return a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
