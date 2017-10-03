#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - function will get length of prefix substring
 * @s: represents string fed from  main
 * @accept: represents string that scans
 * Return: function will return count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count, length;

	length = 0;
	while (accept[length] != '\0')
		length++;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j] && i <= length) {
				count++;

			}
			j++;
		}
		i++;
	}
	return (count);
}
