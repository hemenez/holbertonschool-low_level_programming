#include "holberton.h"
/**
 * *_strstr - function will locate a substring
 * @haystack: represents string to be searched
 * @needle: represents substring
 * Return: function will return located substring
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	if (*needle == '\0')
		return (needle);
	if (!*needle)
		return (haystack);
	return (NULL);
}
