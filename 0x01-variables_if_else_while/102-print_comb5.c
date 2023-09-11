#include <stdio.h>
/**
* main - print all combinations of two two-digit numbers in ascending order
* Return: 0
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		int j = 48;

		while (j < 58)
		{
			int k = 48;

			while (k < 58)
			{
				int l = 48;

				while (l < 58)
				{
					if (k > i || (k == i && l > j))
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
