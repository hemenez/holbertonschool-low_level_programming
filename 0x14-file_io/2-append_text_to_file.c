#include "holberton.h"
#include <stdlib.h>
/**
 * append_text_to_file - function will append text at end of file
 * @filename: represents name of file that will be added to
 * @text_content: represents the string to add at the end of file
 * Return: function returns 1 upon success, -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int count;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	x = open(filename, O_RDWR | O_APPEND, 0600);
	if (x == -1)
		return (-1);
	count = 0;
	while (text_content[count] != '\0')
		count++;
	y = write(x, text_content, count);
	if (y == -1)
		return (-1);
	return (1);
}
