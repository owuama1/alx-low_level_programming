#include "main.h"
/**
*rot13 - encode a string using rot13
*@str: string
*Return: encoded string
*/
char *rot13(char *str)
{
	int i;
	char *result = str;  /* Save the original pointer for returning*/

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';

			str[i] = (c - base + 13) % 26 + base;
		}
	}

	return (result);
}
