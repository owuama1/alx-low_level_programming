#include "main.h"
#include <stdio.h>
/**
*print_buffer - prints a buffer
*@b: chracters
*@size: size of buffer
*Return: nothing
*/

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i); /* Print the starting position in hexadecimal*/

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j] & 0xFF); /* Print the hexadecimal content*/
			} else
			{
				printf("  "); /* Padding for incomplete lines*/
			}

			if (j % 2 == 1)
			{
				printf(" "); /* Add a space between bytes*/
			}
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				printf("%c", (c >= 32 && c <= 126) ? c : '.'); /* Print the content*/
			} else
				printf(" ");
		}
		printf("\n");
	}
}
