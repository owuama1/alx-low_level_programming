#include "main.h"
/**
*
*
*Return: 
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
