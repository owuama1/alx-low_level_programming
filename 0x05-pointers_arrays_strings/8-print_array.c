#include "main.h"
#include <stdio.h>
/**
*print_array - prints the elements of an array
*@a: pointer
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	if (a == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
