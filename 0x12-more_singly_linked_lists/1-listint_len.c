#include "lists.h"
/**
 * listint_len - function will return number of elements
 * @h: represents pointer to head node
 * Return: function returns count of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *buff;
	int count = 0;

	buff = h;
	while (buff != NULL)
	{
		buff = buff->next;
		count++;
	}
	return (count);
}
