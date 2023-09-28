#include <stdio.h>
#include <stdint.h>
/**
*largestPrimeFactor - gets the largest prime number
*@n: integer
*Return: the max prime factor
*/
int64_t largestPrimeFactor(int64_t n)
{
	int64_t maxPrime = -1;
	int64_t i;

	/* Divide n by 2 while it is even */
	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}

	/* Now n must be odd. Check for prime factors up to the square root of n.*/
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}

	/* If n is still greater than 1, it's a prime number itself. */
	if (n > 1)
	{
		maxPrime = n;
	}

	return (maxPrime);
}

/**
*main - starting point
*Return: 0
*/
int main(void)
{
	int64_t num = 612852475143;
	int64_t result = largestPrimeFactor(num);

	printf("%ld\n", result);

	return (0);
}

