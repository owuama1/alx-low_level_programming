#include <stdio.h>
/* more headers goes there */
/**
* main - output the alphabets in lowercase in reverse
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	n = 122;
	while (n > 96)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
