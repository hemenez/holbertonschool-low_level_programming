#include <stdio.h>
/**
 * main - function will print program's name
 * @argc: represents argument counter
 * @argv: represents array containing command line args
 * Return: function will return 0 when compiled properly
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
