#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - a program that performs simple operations.
*@argc: argument count
*@argv: argument vector
*Return: 0
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int result;

	int (*operation)(int, int) = get_op_func(operator);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
