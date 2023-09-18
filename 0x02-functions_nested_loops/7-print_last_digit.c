#include "main.h"
/**
* _abs - output the absolute value of a number
*@n: the number
*Return: the absolute value
*/
int _abs(int n)
{
		if (n < 0)
		{
			return (-n);
		}
		else
			return (n);
}
/**
*print_last_digit - print the last digit of n
*@n: a number
*Return: the last digit
*/
int print_last_digit(int n)
{
	 int last_digit = _abs(n) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
/*why did this not work: return (_putchar((_abs(n) % 10) + '0'));*/
}
