#include "main.h"
#include <stdlib.h>
/**
*_memset - fills memory with constant byted
*@s: memory area pointed to by s
*@b: constant byte
*@n: numbero of bytes
*Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
		char *dest = s;  /* Save the original pointer for returning*/

		while (n > 0)
		{
			*s = b;
			s++;
			n--;
		}

		return (dest);
}
/**
*_calloc - allocates memory for an array, using malloc.
*@nmemb: integer
*@size: size of array
*Return:  pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size = (size_t)nmemb * size;
	void *ptr = malloc(total_size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL); /* Return NULL for nmemb or size equal to 0*/
	}

	if (ptr == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	_memset(ptr, 0, total_size); /* Initialize the allocated memory to zero*/

	return (ptr);
}
