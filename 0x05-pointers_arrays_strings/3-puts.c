#include "main.h"
/**
*_puts - print out a string
*@str: the string
*Return: nothing
*/
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
