#include "main.h"
#include <stdlib.h>
/**
*_memcpy - a function that copies memory area
*@dest: destination
*@src: source
*@n: number of bytes
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
		char *original_dest = dest; /*Save the original dest pointer for returning*/

		while (n > 0)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}

		return (original_dest);
}
/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: a pointer
*@old_size: old size
*@new_size: new size
*Return: a new pointer to the reallocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Allocate memory for the new block*/
	void *new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (malloc(new_size)); /* Equivalent to malloc(new_size) if ptr is NULL*/
	}

	if (new_size == 0)
	{
		free(ptr); /* Equivalent to free(ptr) if new_size is 0*/
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr); /*Do nothing and return ptr if new_size is same as old_size*/
	}

	if (new_ptr == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	/* Copy the content from the old block to the new block*/
	if (new_size < old_size)
	{
		/* Copy only up to the minimum of old and new sizes*/
		_memcpy(new_ptr, ptr, new_size);
	} else
	{
		/* Copy the entire old block and leave the "added" memory uninitialized*/
		_memcpy(new_ptr, ptr, old_size);
	}

	/* Free the old block*/
	free(ptr);

	return (new_ptr);
}
