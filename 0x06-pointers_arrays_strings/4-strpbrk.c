#include "holberton.h"
/**
 * *_strpbrk - function will search a string for any set of bytes
 * @s: represents string to be searched
 * @accept: represents set of bytes to look for
 * Return: function will return searched string
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	char *ptr;

	ptr = s;
	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				ptr = s;
				return (ptr);
			}
			j++;
		}
		s++;
	}
	if (accept[j] == '\0')
		return (ptr);
	return (NULL);
}
