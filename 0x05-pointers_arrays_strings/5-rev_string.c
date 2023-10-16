#include "main.h"
/**
*rev_string - reverses a string
*@s: a char pointer
*Return: Nothing
*/
void rev_string(char *s)
{
	int i, length;

	if (s == NULL)
	{
		return;
	}
	length = 0;
	while (s[length] != '\0')
		length++;
	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
