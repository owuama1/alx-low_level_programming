#include "main.h"
#include <stdlib.h>
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
*_strcpy - copies the string pointed to by src to dest
*@src: source
*@dest: destination
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
		char *dest_start = dest;

		if (src == NULL || dest == NULL)
		{
			return (NULL);
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';

		return (dest_start);
}
/**
*set_string - sets the value of a pointer to a char.
*@s: pointer to a ptr
*@to: input string
*Return: nothing
*/
void set_string(char **s, char *to)
{
	/* Check if the input string 'to' is not NULL*/
	if (to != NULL)
	{
		/* Allocate memory for the new string*/
		*s = (char *)malloc(_strlen(to) + 1);

		/* Check if memory allocation was successful*/
		if (*s != NULL)
		{
			/* Copy the contents of 'to' into the newly allocated memory*/
			_strcpy(*s, to);
		}
	} else
	{
		/* If 'to' is NULL, set the pointer to NULL as well*/
		*s = NULL;
	}
}
