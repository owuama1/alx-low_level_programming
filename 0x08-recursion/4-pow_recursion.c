#include "main.h"
/**
*_pow_recursion - find a number to a certain power
*@x: a number
*@y: a number
*Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Return -1 for an error if y is negative*/
	} else if (y == 0)
	{
		return (1);  /* Any number raised to the power of 0 is 1*/
	}
	return (x * _pow_recursion(x, y - 1)); /* Recursive call to calculate x^y*/
}
