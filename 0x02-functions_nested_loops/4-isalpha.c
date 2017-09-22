#include "holberton.h"
/**
 * _isalpha - program will decide return value if upper or lowercase letter
 * Return: - program will return a 1 if c is a letter, otherwise it returns 0
 * @c: will hold value of variable
 */

int _isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	else
		return (0);
}
