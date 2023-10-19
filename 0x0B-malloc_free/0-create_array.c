#include "main.h"
#include <stdlib.h>
/**
*create_array - creates a chars array, and initializes it with a specific char
*@size: size of the array
*@c: character
*Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0*/
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c; /* Initialize each element with the specified character*/
	}

	return (array);
}
