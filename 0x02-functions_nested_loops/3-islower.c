#include "holberton.h"
/**
 * _islower - program will decide return value contingent upon letter printed
 * Return: - program will return 1 if between 'a'-'z,' otherwise it'll print 0
 * @c: holds the value for the testing variable
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
