#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - function selects correct function to perform op
 * @s: represents operator passed from main
 * @a: represents first argument to be operated
 * @b: represetns second argument to be operated
 * Return: function will return calculation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
