#include "lists.h"
/**
 * pop_listint - function will remove head node
 * @head: represents pointer to pointer to head node
 * Return: function will return data value
 */

int pop_listint(listint_t **head)
{
	listint_t *buff;

	buff = *head;
	if (buff->n == (*head)->n)
	{
		*head = buff->next;
		free(buff);
		return ((*head)->n);
	}
	return (0);
}
