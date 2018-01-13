#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_delete - function deletes hash table
 * @ht: representation of hash table
 * Return: function returns void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *buff;
	unsigned long int index;

	index = 0;
	buff = ht->array[index];
	while (index < ht->size)
	{
		while (buff != NULL)
		{
			free(buff->key);
			free(buff->value);
			free(buff->next);
			buff = buff->next;
		}
		index++;
		buff = ht->array[index + 1];
	}
	free(buff);
	free(ht);
}
