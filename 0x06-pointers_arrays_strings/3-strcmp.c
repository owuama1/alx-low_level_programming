#include "main.h"
/**
*_strcmp - compare two strings
*@s1: string
*@s2: string
*Return: 0 if equal, < 0 if str1 compares < str2, > 0 if str1 compares > str2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(*s1 - *s2));
}
