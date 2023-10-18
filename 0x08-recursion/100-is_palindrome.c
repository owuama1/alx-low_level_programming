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
/**
*is_palindrome_helper - helps to check if a string is a palindrome
*@s: string
*@start: beginning of string
*@end: end of string
*Return: 1 if true. 0 if false
*/
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Return 1 if the string is a palindrome*/
	}

	if (s[start] != s[end])
	{
		return (0); /* Return 0 if characters at start and end don't match*/
	}
	/*Recursively check the next chars*/
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
*is_palindrome - checks if a string is a palindrome
*@s: string
*Return: 1 if true. 0 if false
*/
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1); /* An empty string or single-character string is a palindrome*/
	}
	/* Start checking from the first and last characters*/
	return (is_palindrome_helper(s, 0, length - 1));
}
