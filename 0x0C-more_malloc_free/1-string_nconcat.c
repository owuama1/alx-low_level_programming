#include "main.h"
#include <stdlib.h>
/**
*_strncpy - copies a string
*@dest: destination
*@src: source
*@n: number of bytes
*Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
		char *original_dest = dest;  /* Save the original destination pointer*/

		while (n > 0 && *src)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}

		/* If there are remaining bytes to fill, pad with null characters*/
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}

		return (original_dest);
}
/**
*_strlen - finds the length of the string
*@s: a string
*Return: the length
*/
int _strlen(char *s)
{
		int i;

		for (i = 0; *s != '\0'; i++)
			s++;
		return (i);
}
/**
*string_nconcat - concatenates two strings
*@s1: string
*@s2: string
*@n: integer
*Return: newly allocated space in memory, containing s1,
*followed by the 1st n bytes of s2, and null terminated
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = _strlen(s1);
	size_t len2 = _strlen(s2);
	char *concatenated = (char *)malloc(len1 + n + 1);

	if (s1 == NULL)
	{
		s1 = ""; /* Treat a NULL s1 as an empty string*/
	}
	if (s2 == NULL)
	{
		s2 = ""; /* Treat a NULL s2 as an empty string*/
	}

	/* Use the smaller of n and the length of s2*/
	if (n >= len2)
	{
		n = len2;
	}

	if (concatenated == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails*/
	}

	_strncpy(concatenated, s1, len1); /* Copy the first string*/
	_strncpy(concatenated + len1, s2, n); /*Copy the 1st n chars of the 2nd str*/
	concatenated[len1 + n] = '\0'; /* Null-terminate the concatenated string*/

	return (concatenated);
}
