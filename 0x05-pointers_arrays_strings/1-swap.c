#include "main.h"
/**
*swap_int - swap two values
*@a: a ptr
*@b: a ptr
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int y = *a;
	*a = *b;
	*b = y;
}
