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
	void (*f)(void);
} mover;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void string_print(void);
void char_print(void);
void int_print(void);
void float_print(void);

#endif
