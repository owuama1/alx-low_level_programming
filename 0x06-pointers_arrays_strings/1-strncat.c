#include "main.h"
/**
*_strncat - concatenate two strings
*@dest: destination
*@src: source
*@n: number of bytes
*Return: a  pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;  /* Save the original destination pointer*/

    /* Find the end of the destination string*/
	while (*dest)
		dest++;

	/* Copy at most 'n' bytes from src to dest*/
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';  /* Null-terminate the concatenated string*/

	return (original_dest);  /* Return a pointer to the resulting string*/
}
