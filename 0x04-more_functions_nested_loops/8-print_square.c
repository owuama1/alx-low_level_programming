#include "main.h"
/**
*print_square - print the alphabets in lowercase 10 times
*@size: size of the square
*return: nothing
*/
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
