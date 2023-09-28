#include "main.h"
/**
*print_triangle - print triangle
*@size: integer
*Return: nothing
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size < 1)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
