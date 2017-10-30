#include "lists.h"
/**
 * add_nodeint_end - function will add node at end of list
 * @head: represents pointer to pointer of head node
 * @n: represents value to be written in node
 * Return: function will return address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *buff;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	buff = *head;
	while (buff->next != NULL)
		buff = buff->next;
	buff->next = new;
	return (new);
}
