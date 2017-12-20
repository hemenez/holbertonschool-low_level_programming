#include "lists.h"
/**
 * print_dlistint - function will print all elements of a doulbe linked list
 * @h: represents pointer to head node
 * Return: function will return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int count;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
