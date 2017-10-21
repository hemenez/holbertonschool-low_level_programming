#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function will print strings
 * @separator: represents separator between strings
 * @n: represents number of parameters
 * Return: function returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list params;

	if (separator == NULL)
		return;
	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(params, char *);
		if (string == NULL)
			printf("(nil)");
		printf("%s", string);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
