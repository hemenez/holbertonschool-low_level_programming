#include "lists.h"
/**
 * free_listint2 - function will free memory
 * @head: represents pointer to pointer to head node
 * Return: function returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *buff;

	while (*head)
	{
		buff = (*head);
		(*head) = (*head)->next;
		free(buff);
	}
	free(*head);
}
