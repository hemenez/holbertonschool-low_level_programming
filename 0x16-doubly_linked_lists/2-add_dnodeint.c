#include "lists.h"
/**
 * add_dnodeint - function will add new node at beginning of list
 * @head: represents pointer to pointer to head
 * @n: reprents data to be implemented in new node
 * Return: function will return address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		(*head) = new;
	}
	else
	{
		new->next = (*head);
		new->prev = NULL;
		(*head) = new;
	}
	return (new);
}
