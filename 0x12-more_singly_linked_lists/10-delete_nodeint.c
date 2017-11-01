#include "lists.h"
/**
 *
 *
 *
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *buff;
	listint_t *buff2;

	if (head == NULL)
		return (-1);
	buff = *head;
	if (index == 0)
	{
		(*head) = buff->next;
		return (1);
	}
	buff2 = buff->next;
	x = 0;
	while (x < (index - 1) && buff != NULL)
	{
		if (buff == NULL)
		{
			return (-1);
		}
		buff = (*head);
		(*head) = buff->next;
		x++;
	}
	buff->next = buff2->next;
	return (1);
}
