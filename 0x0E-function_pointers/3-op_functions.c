#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * op_add - function will add two ints
 * @a: represents first argument
 * @b: represents second argument
 * Return: function will return sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function will subtract two ints
 * @a: represents first argument
 * @b: represents second argument
 * Return: function will return difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function will multiply two ints
 * @a: represents first argument
 * @b: represents second argument
 * Return: function will return product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function will divide two ints
 * @a: represents first argument
 * @b: represents second argument
 * Return: function will return result of division
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
/**
 * op_mod - function will modulo an int against another
 * @a: represents first argument
 * @b: represents second argument
 * Return: function will return remainder of division
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
