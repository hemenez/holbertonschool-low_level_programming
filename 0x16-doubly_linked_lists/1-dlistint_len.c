#include "lists.h"
/**
 * dlistint_len - function will return count of nodes
 * @h: represents pointer to head node
 * Return: function returns count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;
	const dlistint_t *tmp;

	tmp = h;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
