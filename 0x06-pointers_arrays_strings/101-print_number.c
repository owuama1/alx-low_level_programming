#include "main.h"
/**
*print_number - Recursive function to print an integer
*@n: number
*Return: nothing
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');  /* Handle negative numbers*/
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);  /* Recursively print the digits*/
	}

	_putchar(n % 10 + '0');  /* Print the last digit as a character*/
}
