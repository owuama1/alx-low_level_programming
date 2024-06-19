#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit - checks if a string is composed only of digits
 * @s: the string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * print_error - prints an error message and exits
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two large numbers represented as strings
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the product as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	char *final_result;
	int i, j, carry, n1, n2;

	if (result == NULL)
		return (NULL);
	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;
	if (i == len1 + len2)
		return ("0");
	final_result = malloc((len1 + len2 - i + 1) * sizeof(char));
	if (final_result == NULL)
	{
		free(result);
		return (NULL);
	}
	j = 0;
	while (i < len1 + len2)
		final_result[j++] = result[i++] + '0';
	final_result[j] = '\0';

	free(result);
	return (final_result);
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
		print_error();

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	result = multiply(argv[1], argv[2]);
	if (result == NULL)
		print_error();

	printf("%s\n", result);
	free(result);

	return (0);
}
