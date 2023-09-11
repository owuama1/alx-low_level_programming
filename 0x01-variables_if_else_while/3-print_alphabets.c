#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
* main - output the alphabets in lowercase and uppercase
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	n = 65;
	while (n < 91)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
