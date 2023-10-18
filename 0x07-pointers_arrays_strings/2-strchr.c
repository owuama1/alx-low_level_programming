#include "main.h"
/**
*_strchr - a function that locates a character in a string.
*@s: a pointer to a string
*@c: a character
*Return: a ptr to the 1st occurrence of c in s, or NULL if c is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);  /* Found the character, return a pointer to it*/
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);  /*Handle the special case of searching for the null terminator*/
	}

	return (NULL);  /* Character not found*/
}

