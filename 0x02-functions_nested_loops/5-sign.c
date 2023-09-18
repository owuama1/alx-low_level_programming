#include "main.h"
/**
*print_sign - prints the sign of a number
*@n: the number
*Return: 1 if +ve. -1 if -ve. 0 if 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
