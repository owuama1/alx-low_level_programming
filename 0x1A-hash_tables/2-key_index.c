#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key in a hash table.
 * @key: The key string
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key should be stored in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculate the index within the size of the array */
	return (hash_value % size);
}
