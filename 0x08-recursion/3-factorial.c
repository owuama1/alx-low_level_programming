#include "main.h"
/**
*factorial - calculates the factorial of a number
*@n: number
*Return: the factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 for an error if n is negative*/
	} else if (n == 0)
	{
		return (1);  /* Base case: 0! is defined as 1*/
	}
	return (n * factorial(n - 1)); /*Recursive call to calculate factorial*/
}
