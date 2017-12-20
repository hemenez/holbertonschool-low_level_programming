#include "holberton.h"
/**
 * *leet - function will encode a string into 1337 code
 * @str: represents string fed from main function
 * Return: function will return translated string
 */

char *leet(char *str)
{
	int index;
	int count;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	index = 0;
	while (str[index] != '\0')
	{
		count = 0;
		while (let[count] != '\0')
		{
			if (let[count] == str[index])
				str[index] = num[count];
			count++;
		}
		index++;
	}
	return (str);
}
