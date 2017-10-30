#include "lists.h"
/**
 * free_listint - function will free a linked list
 * @head: represents pointer to head node
 * Return: function returns void
 */

void free_listint(listint_t *head)
{
	listint_t *buff;

	while (head != NULL)
	{
		buff = head;
		head = head->next;
		free(buff);
	}
	free(head);
}
