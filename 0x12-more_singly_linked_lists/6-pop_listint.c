#include "lists.h"
/**
 * pop_listint - function will remove head node
 * @head: represents pointer to pointer to head node
 * Return: function will return data value
 */

int pop_listint(listint_t **head)
{
	listint_t *buff;
	int holder;

	if ((*head) != NULL)
	{
		buff = *head;
		holder = (*head)->n;
		*head = buff->next;
		free(buff);
		return (holder);
	}
	return (0);
}
