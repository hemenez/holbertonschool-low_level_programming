#include "holberton.h"
/**
 * *string_toupper - Function will convert lowercase letters to uppercase
 * @z: Represents string passed from main function
 * Return: Function will return converted string
 */

char *string_toupper(char *z)
{
	int a;

	a = 0;

	while (z[a] != '\0')
	{
		if (z[a] > 96 && z[a] < 123)
			z[a] = z[a] - 32;
		a++;
	}
	return (z);
}
