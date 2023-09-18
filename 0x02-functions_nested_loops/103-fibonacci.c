#include <stdio.h>
/**
*main - prints the sum of even fibonacci numbers < 4000000
*Return: 0
*/
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	long int total = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			total += b;

		sum = a + b;
		a = b;
		b = sum;
	}

	printf("%ld\n", total);
	return (0);
}
