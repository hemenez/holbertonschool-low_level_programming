#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * char_print - function will print a char
 * @param: represents parameter count
 * Return: function returns void
 */

void char_print(va_list param)
{
	printf("%c", va_arg(param, int) + 0);
}
/**
 * int_print - function will print an int
 * @param: represents parameter count
 * Return: function returns void
 */

void int_print(va_list param)
{
	printf("%d", va_arg(param, int));
}
/**
 * float_print - function will print a float
 * @param: represents parameter count
 * Return: function will return void
 */

void float_print(va_list param)
{
	printf("%f", va_arg(param, double));
}
/**
 * string_print - function will print a string
 * @param: represents parameter count
 * Return: function will return void
 */

void string_print(va_list param)
{
	char *a;

	a = va_arg(param, char *);
	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}
/**
 * print_all - function will print everything
 * @format: represents constant fed to function
 * Return: function will return void
 */

void print_all(const char * const format, ...)
{
	va_list param;
	int i;
	int j;
	mover in[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(param, format);
	j = 0;
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (in[i].given != NULL)
		{
			if (format[j] == *(in[i].given))
			{
				(in[i].f)(param);
				printf(", ");
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(param);
}
