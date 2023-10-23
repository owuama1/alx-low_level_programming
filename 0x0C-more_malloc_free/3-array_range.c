#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers.
*@min: minimum
*@max: maximum
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array = (int *)malloc(sizeof(int) * (max - min + 1));
	int i;

	if (min > max)
	{
		return (NULL); /* Return NULL if min > max*/
	}

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min; /* Initialize the array with values from min to max*/
	}

	return (array);
}
