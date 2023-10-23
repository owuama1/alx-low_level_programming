#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
/**
*print_opcodes - prints the opcodes
*@main_addr: the main address
*@num_bytes: number of bytes
*Return: nothing
*/
void print_opcodes(unsigned char *main_addr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_addr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
*main - prints the opcodes of its own main function.
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);
	unsigned char *main_ptr = (unsigned char *)(uintptr_t)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main_ptr, num_bytes);

	return (0);
}

