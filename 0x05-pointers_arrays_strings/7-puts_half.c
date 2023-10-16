#include "main.h"
/**
*_strlen - finds the length of the string
*@s: a string
*Return: the length
*/
int _strlen(char *s)
{
		int i;

		for (i = 0; *s != '\0'; i++)
			s++;
		return (i);
}
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
