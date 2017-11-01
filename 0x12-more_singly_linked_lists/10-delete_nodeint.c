#include "lists.h"
/**
 * delete_nodeint_at_index - function will delete node at given index
 * @head: represents pointer to pointer to function
 * @index: represents index to be referenced
 * Return: returns 1 upon success, -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *buff;
	listint_t *buff2;

	if ((*head) == NULL && head == NULL)
		return (-1);
	buff = *head;
	if (index == 0)
	{
		(*head) = NULL;
		free(buff);
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
		buff = buff->next;
		buff2 = buff->next;
		x++;
	}
	buff->next = buff2->next;
	free(buff2);
	return (1);
}
