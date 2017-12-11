#include "lists.h"
/**
 * insert_dnodeint_at_index - function will insert new node at nth position
 * @h :represents pointer to head node
 * @idx: represents idx to be reached
 * @n: represents data to be stored in new node
 * Return: function will return new node or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int count;

	count = 0;
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
		return (NULL);
	tmp = *h;
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (count == idx - 1)
		{
			new->next = tmp->next;
			tmp->next->prev = new;
			tmp->next = new;
			new->prev = tmp;
			tmp = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
