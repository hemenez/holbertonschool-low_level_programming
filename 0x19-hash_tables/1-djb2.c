#include "hash_tables.h"
/**
 * hash_djbt - function implements djb2 hashing algorithm
 * @str: represents string to be hashed
 * Return: function returns hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
