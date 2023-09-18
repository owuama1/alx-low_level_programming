#include "main.h"
/**
*times_table - print the 9 times table
*Return: nothing
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			k = j + 1;

			if (product > 9)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
				_putchar(product + '0');
			if (j == 9)
				break;
			_putchar(',');
			if (i * k <= 9)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
