#include "main.h"
/**
*flip_bits - returns num of bits you need to flip to get from 1 num to another
*@n: number
*@m: number
*Return: the num of bits you need to flip to get from one num to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
