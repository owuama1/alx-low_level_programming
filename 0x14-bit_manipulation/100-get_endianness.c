#include "main.h"
/**
*get_endianness -  checks the endianness.
*Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	/* If the least significant byte is 1, the system is little-endian.*/
	/* If the most significant byte is 1, the system is big-endian.*/
	if (*byte_ptr == 1)
	{
		return (1); /* Little-endian*/
	}
	return (0); /* Big-endian*/
}
