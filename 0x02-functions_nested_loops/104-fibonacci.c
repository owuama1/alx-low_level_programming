#include <stdio.h>
/**
*main - prints the first 98 fibonacci numbers starting from 1 and 2
*Return: 0
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int i, sum;

	printf("%lu, %lu, ", a, b);
	for (i = 2; i < 92; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i == 91)
			break;
		printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
