#include "lists.h"
/**
 *
 *
 *
 *
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
