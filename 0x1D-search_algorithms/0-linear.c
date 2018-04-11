#include "search_algos.h"
/**
 * linear_search - fxn searchs for a val in array of ints
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: returns matching index on success, -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int idx;

	if (array == NULL)
		return (-1);
	idx = 0;
	while (idx < size)
	{
		printf("Value checked array [%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
