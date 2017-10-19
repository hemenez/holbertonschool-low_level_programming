#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>
/**
 * main - function will take two arguments
 * @argc: represents first argument
 * @argv: represents string of argument
 * Return: function will return final operation result
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
