#include "holberton.h"
/**
 * _strspn - function will get length of prefix substring
 * @s: represents string fed from  main
 * @accept: represents string that scans
 * Return: function will return count on success and -1 on failure
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count, tracker;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		tracker = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
				j++;
			else if (s[i] == accept[j])
			{
				count++;
				tracker++;
				j++;
			}

		}
		if (tracker == 0)
		{
			return (count);
		}
		i++;
	}
	return (-1);
}
