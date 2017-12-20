#include "lists.h"
#include <string.h>
/**
 * add_node - function will add new node at beginning of list
 * @head: represents pointer to pointer of first node
 * @str: represents string to be copied
 * Return: function will return pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
