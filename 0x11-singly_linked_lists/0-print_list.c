#include "lists.h"
/**
 * print_list - function will print all elements of a linked list
 * @h: represents pointer to head node
 * Return: function will return number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;
	const list_t *buff;

	buff = h;
	count = 0;
	while (buff != NULL)
	{
		if (buff->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", buff->len, buff->str);
		buff = buff->next;
		count++;
	}
	return (count);
}
