#include "lists.h"
/**
 * free_dlistint - function will free linked list
 * @head: represents pointer to head
 * Return: function is void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(head);
}
