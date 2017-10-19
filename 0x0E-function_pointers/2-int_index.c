#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function will search for an integer
 * @array: represents array passed
 * @size: represents size of array
 * @cmp: represents compare function pointer
 * Return: function will return index match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) == 1)
			return (i);
	}
	return (0);
}
