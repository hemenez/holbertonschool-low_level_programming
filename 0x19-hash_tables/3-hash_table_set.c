#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function adds element to hash table
 * @ht: represensts hash table to be added to
 * @key: represents key value to be added
 * @value: represents value value to be added
 * Return: returns 1 if succeeded, 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *buff;

	index = key_index(((unsigned char *)key), ht->size);
	if (*key == '\0')
		return (0);
	if (key == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	buff = ht->array[index];
	while (buff != NULL)
	{
		if (strcmp(buff->key, key) == 0)
		{
			buff->value = strdup(value);
			return (1);
		}
		buff = buff->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
