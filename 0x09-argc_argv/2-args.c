#include <stdio.h>
/**
 * main - function will print all arguments received
 * @argc: represents number of arguments passed
 * @argv: represens array of string
 * Return: function will return 0 on proper completion
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
