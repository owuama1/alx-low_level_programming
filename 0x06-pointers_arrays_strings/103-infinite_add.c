#include "main.h"
/**
*_strlen - finds the length of the string
*@s: a string
*Return: the length
*/
int _strlen(char *s)
{
		int i;

		for (i = 0; *s != '\0'; i++)
			s++;
	return (i);
}
/**
*infinite_add - a function that adds two numbers
*@n1: string
*@n2: string
*@r: buffer that the function will use to store the result
*@size_r: buffer size
*Return: sum of the integers
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int carry = 0; /* Initialize carry to 0*/
	int start, end;
	int i, j, k;

	if (len1 + len2 >= size_r)
	{
		return (0); /* Result cannot be stored in r*/
	}

	for (i = len1 - 1, j = len2 - 1, k = 0;
		i >= 0 || j >= 0 || carry;
		i--, j--, k++)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		r[k] = (sum % 10) + '0'; /* Store the digit in the result buffer*/
		carry = sum / 10; /* Update the carry*/
	}

	r[k] = '\0'; /* Null-terminate the result string*/

	/* Reverse the result string*/
	for (start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
