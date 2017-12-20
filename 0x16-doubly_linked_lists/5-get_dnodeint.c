#include "lists.h"
/**
 * get_dnodeint_at_index - function will return nth node
 * @head: represents pointer to beginning of list
 * @index: represent index of node to be returned
 * Return: function will return nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	count = 0;
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
