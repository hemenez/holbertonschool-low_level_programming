#include "holberton.h"
/**
 * reverse_array - Function will reverse the content of an array
 * @a: Represents the pointer that leads to the array
 * @n: Represents the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int start;
	int temp;

	start = 0;
	while (start < n - 1)
	{
		temp = a[start];
		a[start] = a[n - 1];
		a[n - 1] = temp;
		start++;
		n -= 1;
	}
}
