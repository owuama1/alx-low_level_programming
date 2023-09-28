#include "main.h"
/**
*
*
*Return: 
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
