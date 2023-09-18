#include "main.h"
/**
*_isalpha - checks if c is an alphabet
*@c: a character
*Return: 1 if true. 0 if false
*/
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
