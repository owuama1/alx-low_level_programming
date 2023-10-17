#include "main.h"
#include <ctype.h>
/**
*is_separator - check the operators
*@c: character
*Return: 1 if true, 0 is false
*/

int is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
*cap_string - capitalises the first letter of every word
*@str: string
*Return: capitlaised string
*/
char *cap_string(char *str)
{
	int capitalize_next = 1; /* Start with capitalizing the first word*/
	char *result = str;  /* Save the original pointer for returning*/

	while (*str)
	{
		if (is_separator(*str))
		{
			capitalize_next = 1; /* Set to capitalize the next word*/
		} else if (capitalize_next)
		{
			*str = toupper(*str);
			capitalize_next = 0; /* Word already capitalized*/
		} else
		{
			*str = tolower(*str);
		}
		str++;
	}

	return (result);
}
