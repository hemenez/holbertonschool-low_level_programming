#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	int count;
	char *str;

	count = 0;
	while (h->str != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)\n");
			return (count);
		}
		printf("[%d] %s\n", count, h->str);
		str++;
		count++;
	}
	return (count);
}
