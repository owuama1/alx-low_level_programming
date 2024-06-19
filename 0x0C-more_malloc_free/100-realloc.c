#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		/* If malloc fails, return NULL */
		return (NULL);
	}

	/* Copy data from old block to new block */
	/* Copy only the minimum of old_size and new_size bytes */
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	/* Free the old memory block */
	free(ptr);

	/* Return the new memory pointer */
	return (new_ptr);
}
