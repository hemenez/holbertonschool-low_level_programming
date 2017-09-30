#include "holberton.h"
/**
 * *cap_string - function will capitalize all words of a string
 * @str: represents string passed from main function
 * Return: function will return capitalized string to main function
 */

char *cap_string(char *str)
{
	int index;
	int count;
	char arr[] = {32, 9, 44, 59, 46, 33, 43, 34, 40, 41, 123, 125};

	index = 0;
	while (str[index] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] = str[0] - 32;
		if (str[index] > 96 && str[index] < 123)
		{
			count = 0;
			while (arr[count])
			{
				if (arr[count] == str[index - 1])
				{
					str[index] = str[index] - 32;
					break;
				}
				count++;
			}
		}
		index++;
	}
	return (str);
}
