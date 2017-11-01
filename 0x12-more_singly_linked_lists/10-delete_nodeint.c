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
	buff = malloc(sizeof(listint_t));
	if (buff == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = buff->next;
		free(buff);
		return (1);
	}
	buff2 = buff->next;
	x = 0;
	while (x < (index - 1) && buff != NULL)
	{
		if (buff2 == NULL)
		{
			free(buff);
			return (-1);
		}
		buff = (*head);
		(*head) = buff->next;
		x++;
	}
	buff->next = buff2->next;
	free(buff2);
	return (1);
}
