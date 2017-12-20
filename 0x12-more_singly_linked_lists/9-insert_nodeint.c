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
	unsigned int x;

	if (head == NULL)
		return (NULL);
	buff = malloc(sizeof(listint_t));
	if (buff == NULL)
		return (NULL);
	buff->n = n;
	if (idx == 0)
	{
		buff->next = (*head);
		(*head) = buff;
		return (buff);
	}
	buff2 = (*head);
	x = 0;
	while (x < (idx - 1))
	{
		if (buff2 == NULL)
		{
			free(buff);
			return (NULL);
		}
		buff2 = buff2->next;
		x++;
	}
	buff->next = buff2->next;
	buff2->next = buff;
	return (buff);
}
