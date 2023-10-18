#include "main.h"
/**
*_strpbrk - a function that searches a string for any of a set of bytes.
*@s: a pointer
*@accept: string to accept
*Return: ptr to the byte in s that matches one of the bytes in accept
*or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);  /* Found a match, return a pointer to it*/
			}
			a++;
		}

		s++;
	}

	return (NULL);  /* No match found*/
}
