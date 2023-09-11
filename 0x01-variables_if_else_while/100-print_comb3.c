#include <stdio.h>
/**
* main - print all combinations of double digits with comma and space
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
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
