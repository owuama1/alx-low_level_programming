#include <stdio.h>
#include <stdlib.h>
/**
*main - multiply two numbers
*@argc: argument count
*@argv: argument value
*Return: 0. 1 if error
*/
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]); /* Convert the first argument to an integer*/
	int num2 = atoi(argv[2]); /* Convert the second argument to an integer*/
	int result = num1 * num2; /* Multiply the two numbers*/

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result); /* Print the result followed by a new line*/
	return (0);
}
