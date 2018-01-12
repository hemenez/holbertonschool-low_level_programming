#include "hash_tables.h"
/**
 * key_index - function will return index of a key
 * @key: represents key data
 * @size: represents size of array
 * Return: index where key/value should be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key);
	index = hash % size;
	return (index);
}
