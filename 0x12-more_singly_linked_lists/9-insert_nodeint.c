#include "lists.h"
/**
 * insert_nodeint_at_index - function will insert new node at given index
 * @head: represents pointer to pointer to head
 * @idx: represents index to hold new node
 * @n: represents data to be filled
 * Return: function will return pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *buff; /** new node */
	listint_t *buff2; /** buffer node */

	buff = malloc(sizeof(listint_t));
	if (buff == NULL)
		return (NULL);
	buff->n = n;
	buff->next = NULL;
	if (idx == 0)
	{
		buff->next = (*head);
		(*head) = buff;
		return (buff);
	}
	buff2 = *head;
	if (idx > 0 && n)
		buff2 = buff2->next;
	buff->next = buff2->next;
	buff2->next = buff;
	return (buff);
}
