#include "lists.h"
/**
 * free_list - function will free linked list
 * @head: represents pointer to head
 * Return: function returns void
 */

void free_list(list_t *head)
{
	list_t *buffer;

	while (head != NULL)
	{
		buffer = head;
		head = head->next;
		free(buffer->str);
		free(buffer);
	}
	free(head);
}
