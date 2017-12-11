#include "lists.h"
/**
 * add_dnodeint_end - function will add new node at end of list
 * @head: represents pointer to pointer head node
 * @n: represents value to be stored in new node
 * Return: function will return address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *mover;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
		mover = *head;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = (*head);
		(*head) = new;
	}
	while (mover != NULL)
	{
		if (mover->next == NULL)
		{
			new->prev = mover;
			mover->next = new;
			new->next = NULL;
		}
		mover = mover->next;
	}
	return (new);
}
