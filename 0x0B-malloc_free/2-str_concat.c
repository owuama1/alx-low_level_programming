#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings.
*@s1: string
*@s2: string
*Return: returned ptr should point to a newly allocated space in memory which
*contains the contents of s1, followed by contents of s2, and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = ""; /* Treat a NULL s1 as an empty string*/
	}
	if (s2 == NULL)
	{
		s2 = ""; /* Treat a NULL s2 as an empty string*/
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concatenated = (char *)malloc(len1 + len2 + 1);

	if (concatenated == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	_strcpy(concatenated, s1);
	_strcat(concatenated, s2);

	return (concatenated);
}
