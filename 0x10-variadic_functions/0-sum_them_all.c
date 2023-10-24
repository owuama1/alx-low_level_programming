#include "variadic_functions.h"
/**
*sum_them_all -  returns the sum of all its parameters.
*@n: integers
*Return: sum of all its parametersor If n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;        /* Create a va_list to hold the arguments*/

	va_start(args, n); /*Initialize the va_list with the variable argument list*/

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);  /* Get the next argument and add it to the sum*/
	}

	va_end(args); /* Clean up the va_list*/

	return (sum);
}
