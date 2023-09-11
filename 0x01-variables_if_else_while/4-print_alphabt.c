#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
* main - output the alphabets in lowercase except q and e
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
		if (n != 101 && n != 113)
			putchar(n);
		n++;
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
