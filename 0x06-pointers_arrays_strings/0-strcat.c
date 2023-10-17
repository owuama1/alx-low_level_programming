#include "main.h"
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
