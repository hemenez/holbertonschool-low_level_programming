#include "lists.h"
/**
 * delete_dnodeint_at_index - function will delete node at given index
 * @head: represents double pointer to head node
 * @index: represents index to be deleted
 * Return: function returns 1 upon success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *holder;
	unsigned int count;

	count = 0;
	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (tmp->next != NULL && count == index - 1)
		{
			holder = tmp->next;
			tmp->next = tmp->next->next;
			tmp->next->next->prev = tmp;
			free(holder);
			return (1);
		}
/*		else if (tmp->next->next == NULL && count == index - 1)
		{
			holder = tmp->next;
			tmp->next = NULL;
			holder->prev = NULL;
			free(holder);
			return (1);
			} */
		tmp = tmp->next;
		count++;
	}
	if (tmp->next == NULL && count < index)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	return (-1);
}
