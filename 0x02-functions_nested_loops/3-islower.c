#include "main.h"
/**
*_islower - check if c is lowerrcase
*@c: a character
*Return: 1 if true and 0 if false
*/
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
