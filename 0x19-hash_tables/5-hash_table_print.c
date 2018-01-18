#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - function will print a hash table
 * @ht: represents hash table
 * Return: function is void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *buff;
	int counter;

	if (ht == NULL)
		return;
	index = 0;
	counter = 0;
	printf("{");
	buff = ht->array[index];
	while (index < ht->size)
	{
		while (buff != NULL)
		{
			if (counter != 0)
				printf(", '%s': '%s'", buff->key, buff->value);
			if (counter == 0)
				printf("'%s': '%s'", buff->key, buff->value);
			counter++;
			buff = buff->next;
		}
		index++;
		buff = ht->array[index];
	}
	printf("}");
	printf("\n");
}
