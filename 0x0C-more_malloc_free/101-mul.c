#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <gmp.h>
/**
*is_digit - checks if str is a digit
*@str: a char
*Return: 1 if true and 0 if false
*/
int is_digit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0); /* Not a digit*/
		}
	}
	return (1); /* All characters are digits*/
}
/**
*main - a program that multiplies two positive numbers.
*@argc: argument count
*@argv: argument vector
*Return: the product
*/
int main(int argc, char *argv[])
{
	unsigned long num1 = strtol(argv[1], NULL, 10);
	unsigned long num2 = strtol(argv[2], NULL, 10);
	unsigned long result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98); /* Incorrect number of arguments*/
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98); /* Arguments are not composed of digits*/
	}

	printf("%lu\n", result);

	return (0);
}
