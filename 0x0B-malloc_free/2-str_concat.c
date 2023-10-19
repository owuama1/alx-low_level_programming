#include "main.h"
#include <stdlib.h>
/**
*_strcat - concatenates two strings
*@dest: destination
*@src: source
*Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
		int dest_len = 0;
		int src_len = 0;
		int i;

		if (dest == NULL || src == NULL)
		{
			return (NULL); /* Handle NULL input gracefully*/
		}


		/* Find the length of dest and src strings*/
		while (dest[dest_len] != '\0')
		{
			dest_len++;
		}

		while (src[src_len] != '\0')
		{
			src_len++;
		}

		/* Append src to dest, overwriting the null terminator of dest*/
		for (i = 0; i < src_len; i++)
		{
			dest[dest_len + i] = src[i];
		}

		/* Add a new null terminator at the end of the concatenated string*/
		dest[dest_len + src_len] = '\0';

		return (dest);
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
