#include "main.h"
/**
*puts2 - prints every other character
*@str: string
*Return: Nothing
*/
void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		return;
	}
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
