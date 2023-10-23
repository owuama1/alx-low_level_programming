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
	mpz_t num1, num2, result;

	mpz_init(num1);
	mpz_init(num2);
	mpz_init(result);

	if (argc != 3)
	{
		printf("Error\n");
		return (98); /* Incorrect number of arguments*/
	}

	if (mpz_set_str(num1, argv[1], 10) == -1 ||
		mpz_set_str(num2, argv[2], 10) == -1)
	{
		printf("Error\n");
		return (98); /* Arguments are not valid numbers*/
	}

	mpz_mul(result, num1, num2);

	gmp_printf("%Zd\n", result);

	mpz_clear(num1);
	mpz_clear(num2);
	mpz_clear(result);

	return (0);
}
