#include "main.h"
/**
*is_prime_helper - help find a prime number
*@n: integer
*@divisor: a divisor
*Return: the sqrt
*/
int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0); /* Numbers less than or equal to 1 are not prime*/
	}

	if (divisor == 1)
	{
		return (1); /* 1 is not prime, but we've checked all possible divisors*/
	}

	if (n % divisor == 0)
	{
		return (0); /* n is divisible by divisor, so it's not prime*/
	}
	return (is_prime_helper(n, divisor - 1)); /* Check the next divisor*/
}
/**
*is_prime_number - checks if n is a prime number
*@n: integer
*Return: 1 if tru and 0 if false
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1)); /*Start to check with biggest divisor*/
}
