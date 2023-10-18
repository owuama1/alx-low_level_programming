#include "main.h"
/**
*_print_rev_recursion - print a string in reverse
*@s: string
*Return: nothing
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return; /* Base case: Stop when the end of the string is reached*/
	}

	_print_rev_recursion(s + 1); /*Recursively call the function with next character*/
	_putchar(*s); /* Print the current character after the recursive call*/
}
