#include "main.h"
/**
*_memset - fills memory with constant byted
*@s: memory area pointed to by s
*@b: constant byte
*@n: numbero of bytes
*Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *dest = s;  /* Save the original pointer for returning*/

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (dest);
}

