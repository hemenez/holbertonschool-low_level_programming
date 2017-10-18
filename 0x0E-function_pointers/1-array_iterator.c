#include <stdint.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - function will iterate through array
 * @array: represents array being passed
 * @size: represents size of array
 * @action: represents pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		(action)(array[i]);
}
