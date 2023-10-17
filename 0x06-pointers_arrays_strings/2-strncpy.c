#include "main.h"
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
