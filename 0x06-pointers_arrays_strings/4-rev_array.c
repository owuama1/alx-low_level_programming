#include "main.h"
/**
*reverse_array - reverse an array
*@a: array
*@n: number of elements
*Return: nothing
*/
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		/* Swap the elements at the left and right positions*/
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		/* Move the pointers toward the center*/
		left++;
		right--;
	}
}
