#include "main.h"
/**
*get_bit - returns the value of a bit at a given index.
*@n: number
*@index: index
*Return: the value of a bit at a given index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit = (n & mask) ? 1 : 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Index is out of bounds*/
	}

	return (bit);
}
