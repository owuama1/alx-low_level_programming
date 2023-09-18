#include "main.h"
/**
*print_times_table - print the 9 times table
*@n: integer
*Return: nothing
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			k = j + 1;

			if (product > 99)
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10) % 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (product > 9 && product < 100)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else
				_putchar(product + '0');
			if (j == n)
				break;
			_putchar(',');
			if (i * k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (i * k > 9 && i * k < 100)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
