#include "holberton.h"
/**
 * rev_string - function will reverse string
 * @s: represents the string that is input from main function
 */

void rev_string(char *s)
{
	int length;
	int start;
	int temp;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	s = s - length;
	length--;
	start = 0;
	while (start < length)
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		start++;
		length--;
	}
}
