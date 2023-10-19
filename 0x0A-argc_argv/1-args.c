#include <stdio.h>
/**
*main - prints the number of arguments passed into it
*@argc: argument count
*@argv: argument value
*Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv; /* Silence the unused parameter warning*/

	printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name*/
	return (0);
}
