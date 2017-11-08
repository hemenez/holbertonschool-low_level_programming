#include "holberton.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#define messagesize 1024
/**
 * main - function will copy contents of a file into another
 * @argc: represents argument count
 * @argv: represents pointer to pointer of contents
 * Return: function will return 1 upon success, 0 upon failure
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, readthrough, written;
	char *buf; char *file_from; char *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		printerror(98, argv[1]);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
		printerror(99, argv[2]);
	buf = malloc(sizeof(char) * messagesize);
	do {
		readthrough = read(fd_from, buf, messagesize);
		if (readthrough == -1)
			printerror(98, argv[1]);
		written = write(fd_to, buf, readthrough);
		if (written == -1)
			printerror(99, argv[2]);
	}	while (readthrough == messagesize);
	if ((close(fd_from)) == -1)
		closeerror(100, fd_from);
	if ((close(fd_to)) == -1)
		closeerror(100, fd_to);
	free(buf);
	return (0);
}
/**
 * printerror - function will take care of printing error messages for strings
 * @x: represents error message number to be matched
 * @argv: represents file that holds error
 * Return: function returns void
 */

void printerror(int x, char *argv)
{
	if (x == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from");
		dprintf(STDERR_FILENO, "file %s\n", argv);
		exit(98);
	}
	if (x == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}
/**
 * closeerror - function prints error messages for issues with closing
 * @x: represents error message nubmer to be matched
 * @fd_val: represents file descriptor value to be shown
 * Return: function returns void
 */

void closeerror(int x, int fd_val)
{
	if (x == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
		exit(100);
	}
}
