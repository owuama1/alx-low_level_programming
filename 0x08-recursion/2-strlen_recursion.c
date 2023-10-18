#include "main.h"
/**
*_strlen_recursion - find the length of a string
*@s: string
*Return: length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* Base case: Length of an empty string is 0*/
	}

	/*Recursively call the func with next char and add 1 for the current char*/
	return (1 + _strlen_recursion(s + 1));
}
