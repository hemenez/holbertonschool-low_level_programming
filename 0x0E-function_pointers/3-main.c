#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
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
	char *lil; /** to make line shorter */
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
	lil = argv[2];
	if ((num2 == 0) && ((strcmp(lil, "%") == 0) || (strcmp(lil, "/") == 0)))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
