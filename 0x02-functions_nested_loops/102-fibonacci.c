#include <stdio.h>
/**
*main - prints the first 50 fibonacci numbers starting from 1 and 2
*Return: 0
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int i, sum;

	printf("%ld, %ld, ", a, b);
	for (i = 3; i < 50; i++)
	{
		sum = a + b;
		printf("%ld", sum);
		if (i == 49)
			break;
		printf(", ");
		a = b;
		b = sum;
	}
	printf("\n");
	return (0);
}
