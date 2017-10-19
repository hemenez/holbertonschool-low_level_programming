#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
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
	int final;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	final = get_op_func(argv[2])(num1, num2);
	return (final);
}
