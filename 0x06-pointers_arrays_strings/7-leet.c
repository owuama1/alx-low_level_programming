#include "main.h"
/**
*leet - a function that encodes a string into 1337.
*@str: string
*Return: the encoded string
*/
char *leet(char *str)
{
	int i, j;
	char *result = str;  /* Save the original pointer for returning*/

	char leet_chars[] = {'a', 'e', 'o', 't', 'l'};
	char leet_subs[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j] || str[i] == leet_chars[j] - 'a' + 'A')
			{
				str[i] = leet_subs[j];
				break;  /* Exit the inner loop when a substitution is made*/
			}
		}
	}

	return (result);
}
