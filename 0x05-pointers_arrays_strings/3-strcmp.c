#include "holberton.h"
/**
 * _strcmp - function will compare two strings
 * @s1: represents pointer to first string
 * @s2: represents pointer to second string
 * Return: function will return a number based off comparison of strings
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int diff;

	a = 0;
	diff = s1[a] - s2[a];

	if (*s1 < *s2)
	{
		s1++;
		s2++;
		return (diff);
	}
	else if (*s1 > *s2)
	{
		s1++;
		s2++;
		return (diff);
	}
	else
	{
		s1++;
		s2++;
		return (diff);
	}
}
