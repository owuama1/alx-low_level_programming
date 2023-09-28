#include "main.h"
/**
*_isupper - checks if c is uppercase
*@c: a character
*Return: return 1 if true and 0 if false
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
