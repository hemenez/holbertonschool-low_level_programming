#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function will return sum of all params
 * @n: represents number of arguments
 * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list param;

	sum = 0;
	va_start(param, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(param, unsigned int);
	va_end(param);
	return (sum);
}
