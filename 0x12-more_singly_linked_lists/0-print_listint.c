#include "lists.h"
/**
 * print_listint - function will print elements of linked list
 * @h: represents pointer to head
 * Return: function will return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *buff;
	int count = 0;

	buff = h;
	while (buff != NULL)
	{
		printf("%d\n", buff->n);
		buff = buff->next;
		count++;
	}
	return (count);
}
