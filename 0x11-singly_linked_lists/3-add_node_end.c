#include "lists.h"
#include <string.h>
/**
 * add_node_end - function will add new node to end of list
 * @head: represents pointer to pointer of first node
 * @str: represents string to be duplicated
 * Return: function will return address to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *buffer;

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	buffer = *head;
	while (buffer->next != NULL)
		buffer = buffer->next;
	buffer->next = new;
	return (new);
}
