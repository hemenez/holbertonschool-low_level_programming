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

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	x = read(fd, buf, letters);
	if (x == -1)
		return (0);

	y = write(1, buf, x);
	if (y == -1)
		return (0);

	close(fd);
	free(buf);

	return (y);
}
