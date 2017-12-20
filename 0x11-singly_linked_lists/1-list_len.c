#include "lists.h"
/**
 * list_len - function will return number of elements in linked list
 * @h: represents pointer to head node
 * Return: function will return number of elements
 */

size_t list_len(const list_t *h)
{
	int count;
	const list_t *buff;

	buff = h;
	count = 0;
	while (buff != NULL)
	{
		buff = buff->next;
		count++;
	}
	return (count);
}
