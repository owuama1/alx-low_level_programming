#include <stdio.h>
/**
* main - print all combinations of single digits with comma and space
* Return: 0
*/
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
