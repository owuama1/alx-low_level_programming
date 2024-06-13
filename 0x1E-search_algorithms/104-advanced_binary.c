#include "search_algos.h"

/**
 * binary_search_recursive - helper function for advanced_binary, recursively searches
 * for a value in an integer array
 * @array: pointer to the first element of the array to search
 * @value: the value to search for
 * @low: the starting index in the array
 * @high: the ending index in the array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursive(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = low + (high - low) / 2; /* Calculate mid to prevent overflow */
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursive(array, value, mid + 1, high));
		else
			return (binary_search_recursive(array, value, low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search_recursive`, consistently
 * returns the index of the first occurrence of `value` in array.
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursive(array, value, low, high));
}
