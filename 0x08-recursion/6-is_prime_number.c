#include "main.h"
/**
*is_prime_number - checks if n is a prime number
*@n: integer
*Return: 1 if tru and 0 if false
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0); /* Return 0 for numbers <= to 1, as they are not prime*/
	}

	if (n <= 3)
	{
		return (1); /* Return 1 for 2 and 3, which are prime numbers*/
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0); /* Return 0 for numbers divisible by 2 or 3 (excluding 2 and 3)*/
	}

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0); /* Return 0 for numbers divisible by i or i + 2*/
		}
	}

	return (1); /* If none of the above conditions are met, the number is prime*/
}
