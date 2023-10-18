#include "main.h"
/**
*_memcpy - a function that copies memory area
*@dest: destination
*@src: source
*@n: number of bytes
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;  /* Save the original dest pointer for returning*/

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
