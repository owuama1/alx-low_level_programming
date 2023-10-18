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
		while (*(s2 + 1) == '*')
		{
			s2++; /* Skip consecutive '*' characters in s2*/
		}

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1); /* Check if * in s2 represents an empty string*/
			}
			s1++; /* Move to the next character in s1*/
		}

		return (wildcmp(s1, s2 + 1)); /* Check if * in s2 represents the end of s1*/
	}

	if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
	{
		return (0); /* Mismatch or end of one of the strings*/
	}

	return (wildcmp(s1 + 1, s2 + 1)); /* Recursively check the next characters*/
}
