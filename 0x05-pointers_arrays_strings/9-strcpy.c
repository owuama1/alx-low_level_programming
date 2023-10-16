#include "main.h"
/**
*
*
*Return: 
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

    if (src == NULL || dest == NULL)
	{
        return NULL;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_start;
}
