#include "main.h"
/**
*wildcmp - compares two strings
*@s1: string
*@s2: string
*Return: 1 if identical. 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1); /* Both strings are empty, considered identical*/
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1); /*The rest of s2 is '*', considered identical*/
		}

		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1)); /* Check if * in s2 represents the end of s1*/
		}
	/* Check with * representing empty string or end of s1*/
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
	{
		return (0); /* Mismatch or end of one of the strings*/
	}

	return (wildcmp(s1 + 1, s2 + 1)); /* Recursively check the next characters*/
}
