#include "function_pointers.h"
/**
*int_index - searches for an integer.
*@array: array
*@size: size
*@cmp: pointer to the function to be used to compare values
*Return: If no element matches, return -1. If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1); /* Check for invalid input*/
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i); /* Return the index of the first matching element*/
		}
	}

	return (-1); /* No element matched*/
}
/**
*is_even - check if num is even
*@num: number
*Return: 0 if false and 1 is true
*/
int is_even(int num)
{
	return (num % 2 == 0);
}
