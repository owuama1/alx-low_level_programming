#include "main.h"
#include <ctype.h>
/**
*string_toupper - changes all lowercase to uppercase
*@str: string
*Return: uppercase form
*/
char *string_toupper(char *str)
{
	char *result = str;  /* Save the original pointer for returning*/

	while (*str)
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		str++;
	}

	return (result);
}
