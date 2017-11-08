#include "holberton.h"
#include <stdlib.h>
/**
 * create_file - function will create a file
 * @filename: represents file to be created
 * @text_content: represents text to be written in new file
 * Return: function will return 1 upon success, -1 upon fail
 */

int create_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int count;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_RDWR | O_CREAT, 0600);
	if (x == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	count = 0;
	while (text_content[count] != '\0')
		count++;
	y = write(x, text_content, count);
	if (y == -1)
		return (-1);
	return (1);
}
