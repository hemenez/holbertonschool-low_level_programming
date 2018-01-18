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
	hash_node_t *tmp;

	index = 0;
	buff = ht->array[index];
	while (index < ht->size && ht != NULL)
	{
		while (buff != NULL)
		{
			if (buff->key != NULL)
				free(buff->key);
			if (buff->value != NULL)
				free(buff->value);
			tmp = buff;
			tmp = tmp->next;
			free(buff);
			buff = tmp;
		}
		index++;
		buff = ht->array[index];
	}
	free(ht->array);
	free(ht);
}
