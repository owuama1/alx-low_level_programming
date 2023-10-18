#include "main.h"
/**
*_strspn - a function that gets the length of a prefix substring.
*@s: pointer
*@accept: string to accept
*Return: n of bytes in s consisting only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0; /* Initialize the count to zero*/
	char *a;

	while (*s != '\0')
	{
		int found = 0; /* Flag to track if the character is found in accept*/

		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break; /* Found a character in accept, break the inner loop*/
			}
		}

		if (found)
		{
			count++; /* Increment the count if the character is found in accept*/
			s++;
		} else
		{
			break; /* Exit the loop when a character not in accept is encountered*/
		}
	}

	return (count);
}

