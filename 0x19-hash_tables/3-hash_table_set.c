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
	unsigned long int hash;
	unsigned long int i;
	hash_node_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (0);
	hash = hash_djb2((unsigned char *)key);
	if (ht->size < 1)
		return (0);
	index = hash % ht->size;
	if (key[0] == '\0')
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	i = 0;
	while (i < ht->size)
	{
		if (i == index)
		{
			if (*ht->array == NULL)
			{
				new_node->next = NULL;
				*ht->array = new_node;
			}
			else
			{
				new_node->next = *ht->array;
				*ht->array = new_node;
			}
			return (1);
		}
		i++;
	}
	return (0);
}
