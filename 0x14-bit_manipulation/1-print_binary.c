#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
*print_binary -  prints the binary representation of a number.
*@n: number
*Return: nothing
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);  /* Recursively print the higher-order bits*/
	}
	_putchar((n & 1) ? '1' : '0');  /* Print the lowest-order bit*/
}
