#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
/**
 * struct op - represents prototype for pointer function struct
 * @given: represents character to be matched
 * @f: represents correlating function
 */

typedef struct op
{
	char *given;
	void (*f)(va_list);
} mover;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void string_print(va_list);
void char_print(va_list);
void int_print(va_list);
void float_print(va_list);

#endif
