#include "lists.h"
/**
 * free_listint2 - function will free memory
 * @head: represents pointer to pointer to head node
 * Return: function returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *buff;

	if ((*head) == NULL)
		return;
	while ((*head) != NULL)
	{
		buff = (*head);
		(*head) = (*head)->next;
		free(buff);
	}
	free(*head);
	(*head) = NULL;
}
