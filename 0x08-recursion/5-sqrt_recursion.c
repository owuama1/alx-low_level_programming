#include "main.h"
/**
*_sqrt_helper - to help get the square root
*@n: number
*@guess: number
*Return: a number
*/
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess); /* The square of guess equals n, so it is the square root*/
	} else if (guess * guess > n)
	{
		return (-1); /*If guess^2 is greater than n, there's no natural square root*/
	}
	return (_sqrt_helper(n, guess + 1)); /* Recursively try the next guess*/
}
/**
*_sqrt_recursion - find the sqrt of a number
*@n: number
*Return: the squareroot
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 for an error if n is negative*/
	} else if (n == 0 || n == 1)
	{
		return (n); /* Base cases: The square root of 0 or 1 is itself*/
	}
	return (_sqrt_helper(n, 1)); /*Call helper function to find the square root*/
}
