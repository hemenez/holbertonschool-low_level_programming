#include "lists.h"
/**
 * sum_dlistint - function will return sum of all data
 * @head: represents pointer to head of list
 * Return: function will return sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *mover;
	int sum;

	mover = head;
	sum = 0;
	if (mover == NULL)
		return (0);
	while (mover != NULL)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
}
