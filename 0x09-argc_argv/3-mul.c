#include <stdio.h>
#include <stdlib.h>
/**
 * main - function will multiply two numbers
 * @argc: represents command line argument count
 * @argv: represents array of strings
 * Return: program will return 1 if argc is anything other than 3
 */

int main(int argc, char *argv[])
{
	int i;
	int prod;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
