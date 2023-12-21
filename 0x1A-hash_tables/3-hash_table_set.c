#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/*line 23: Check for collision by iterating through the linked list */
/*line 37: If key does not exist, create new node, add at start of the list */
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: value associated with the key (duplicated, can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* Get the index using the key_index function */
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		/* If key already exists, update the value and return success */
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
