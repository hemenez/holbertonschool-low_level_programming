#include "holberton.h"
/**
 *
 *
 */

char *rot13(char *str)
{
	int index;
	int count;
	char first[]= {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77};
	char second[] = {110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};

	index = 0;
	while (str[index] != '\0')
	{
		count = 0;
		while (first[count] != '\0')
		{
			if (str[index] == first[count])
				str[index] = second[count];
			else
				str[index] = first[count];
			count++;
		}
	index++;
	}
	return (str);
}
