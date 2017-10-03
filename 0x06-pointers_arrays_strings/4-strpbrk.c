#include "holberton.h"
/**
 * *_strpbrk - function will search a string for any set of bytes
 * @s: represents string to be searched
 * @accept: represents set of bytes to look for
 * Return: function will return searched string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
				i++;
			else if (s[i] == accept[j])
				return (accept);
			i++;
			j++;
		}
		i++;
	}
	if (accept == '\0')
		return (accept);
	return (NULL);
}
