#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints sum of the two diagonals of square matrix of integers
*@a: pointer
*@size: array size
*Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_primary += a[i * size + i]; /* Sum of the primary diagonal*/
		sum_secondary += a[i * size + (size - 1 - i)]; /* Sum of the secondary diag*/
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
