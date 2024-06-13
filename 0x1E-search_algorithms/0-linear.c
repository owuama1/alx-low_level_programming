#include "search_algos.h"

/**
 * linear_search - Searches for value in an array of ints using Linear search
 * @array: Pointer to first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: Always EXIT_SUCCESS 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
