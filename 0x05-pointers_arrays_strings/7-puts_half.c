#include "main.h"
/**
*puts_half - prints the second half of a string
*@str: string
*Return: Nothing
*/
void puts_half(char *str)
{
	int length, i, start_index;

	length = _strlen(str);
	start_index = (length - 1) / 2 + 1;

	if (str == NULL)
		return;

	for (i = start_index; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
