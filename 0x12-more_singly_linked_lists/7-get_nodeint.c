#include "lists.h"
/**
 * get_nodeint_at_index - function will get node at matched index
 * @head: represents pointer to head node
 * @index: represents index to be tested
 * Return: function will return pointer to matched index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *buff;

	buff = head;
	count = 0;
	while (buff != NULL)
	{
		if (index == count)
			return (buff);
		count++;
		buff = buff->next;
	}
	return (NULL);
}
