#include "lists.h"
/**
 * add_nodeint - function will add new node at beginning of list
 * @head: represents pointer to pointer to head node
 * @n: represents value for node to hold
 * Return: function will return a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (new == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
