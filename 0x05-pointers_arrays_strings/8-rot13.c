#include "holberton.h"
/**
 * *rot13 - function will encode a string using rot13 encryption
 * @x: represents string fed from main function
 * Return: function will return encrypted string to main function
 */

char *rot13(char *x)
{

	char f[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		    'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		    'j', 'k', 'l', 'm'};
	char s[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		    'Y', 'Z', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		    'w', 'x', 'y', 'z'};
	int i;
	int c;

	i = 0;
	while (x[i] != '\0')
	{
		c = 0;
		while (f[c] != '\0' || s[c] != '\0')
		{
			if (x[i] == f[c])
			{
				x[i] = s[c];
			}
			else if (x[i] == s[c])
			{
				x[i] = f[c];
			}
			c++;
		}
		i++;
	}
	return (x);



}
