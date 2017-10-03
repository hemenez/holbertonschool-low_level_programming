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

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				return (needle);
			j++;
		}
		i++;
	}
	if (needle[j] == '\0')
		return (needle);
	if (!*needle)
		return (haystack);
	return (NULL);
}
