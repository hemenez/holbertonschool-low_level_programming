#include "hash_tables.h"
#include <string.h>
/**
 *
 *
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *mover;

        index = key_index((unsigned char *)key, ht->size);
	mover = ht->array[index];
	while (mover != NULL)
	{
		if (strcmp(mover->key, key) == 0)
			return (mover->value);
		mover = mover->next;
	}
	return (NULL);
}
