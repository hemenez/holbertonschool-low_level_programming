#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - function will add positive numbers
 * @argc: represents command line argument count
 * @argv: represents string array
 * Return: function will return 0 if compiled, 1 if value is not a number
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (0);
}
