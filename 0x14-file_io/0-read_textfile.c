#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - function will read text file
 * @filename: represents pointer to file that should be read
 * @letters: represents the number of letters that should be read
 * Return: function will return the number of letters read & printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, x, y;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	x = read(fd, buf, letters);

	y = write(1, buf, letters);
	if (y == -1)
		return (0);

	close(fd);
	free(buf);

	return (x);
}
