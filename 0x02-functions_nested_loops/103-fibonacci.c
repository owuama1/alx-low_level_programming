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
	long int total = 0;

	for (i = 2; i < 4000000; i++)
	{
		sum = a + b;

		if (sum % 2 == 0)
			total += sum;

	/*	printf("%ld", sum);
		if (i == 4000000)
			break;
		printf(", ");*/
		a = b;
		b = sum;
	}
	printf("%ld\n", total);
	return (0);
}
