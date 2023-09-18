#include "main.h"
#include <stdio.h>
/**
*print_to_98 - prints from n to 98
*@n: integer
*Return: nothing
*/
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
		printf("\n");
	}
}
