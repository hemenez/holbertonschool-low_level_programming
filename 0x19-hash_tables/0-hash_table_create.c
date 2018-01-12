#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: represents size of array
 * Return: returns a pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);
	new_hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_hash_table->array[i] = NULL;
		i++;
	}
	new_hash_table->size = size;
	return (new_hash_table);
}
