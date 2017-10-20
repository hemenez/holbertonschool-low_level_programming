#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function will print numbers
 * @separator: represents string separator
 * @n: represents number of argument
 * Return: function returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	unsigned int num;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(params, unsigned int);
		printf("%d", num);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
