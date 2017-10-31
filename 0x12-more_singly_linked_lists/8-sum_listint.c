#include "lists.h"
/**
 * sum_listint - function will return sum of all data
 * @head: represents pointer to head function
 * Return: function wreturns the sum of data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *buff;

	buff = head;
	sum = 0;
	while (buff != NULL)
	{
		sum += buff->n;
		buff = buff->next;
	}
	return (sum);
}
