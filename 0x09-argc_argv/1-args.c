#include <stdio.h>
#include <stdlib.h>
/**
 * main - program will print number of arguments passed to it
 * @argc: represents argument count
 * @argv: represents string array, unused in this program
 * Return: function will return 0 if compiled properly
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int offset;

	offset = argc - 1;

	printf("%d\n", offset);
	return (0);
}
