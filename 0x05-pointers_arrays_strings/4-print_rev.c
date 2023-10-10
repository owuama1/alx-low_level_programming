#include "main.h"
/**
*print_rev - prints a string in reverse
*@s: a string
*Return: nothing
*/
void print_rev(char *s)
{
	int i, length;

	for (i = 0; *s != '\0'; i++)
		s++;
	s--;
	for (length = i - 1; length >= 0; length--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
