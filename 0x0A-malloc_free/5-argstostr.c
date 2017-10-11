#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function will calculate string length
 * @s: represents string
 * Return: function will return length
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
/**
 * argstostr - function will concatenate all arguments
 * @ac: function represents argument count
 * @av: represents pointer to array
 * Return: function will return concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, a;
	char *hold;
	int buffer;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		buffer = _strlen(av[i]) + 1 + buffer;
	hold = (char *) malloc(buffer * sizeof(char) + 1);
	if (hold == NULL)
		return (NULL);
	a = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			hold[a] = av[i][j];
			a++;
		}
		hold[a] = '\n';
		a++;
	}
	hold[a] = '\0';
	return (hold);
}
