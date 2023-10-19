#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - adds positive numbers
*@argc: argument count
*@argv: argument value
*Return: the addition
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;
	int num;

	if (argc == 1)
	{
		printf("0\n"); /* No numbers provided, print 0 and return*/
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n"); /* Non-digit character found, print Error and return*/
				return (1);
			}
		}
		num = atoi(argv[i]); /* Convert the argument to an integer*/
		if (num < 0)
		{
			printf("Error\n"); /* Negative number found, print Error and return*/
			return (1);
		}

		sum += num; /* Add the positive number to the sum*/
	}

	printf("%d\n", sum); /* Print the result followed by a new line*/
	return (0);
}
