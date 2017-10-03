#include "holberton.h"
/**
 * *_strstr - function will locate a substring
 * @haystack: represents string to be searched
 * @needle: represents substring
 * Return: function will return located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (haystack[i] != '\0')
	{
		k = i;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[k] == needle[j])
				k++;
			else
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
