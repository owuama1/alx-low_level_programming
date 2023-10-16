#include "main.h"
/**
*
*
*Return: 
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

    if (s == NULL)
	{
		return 0;
	}

    /* Skip leading whitespace characters*/
	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}

    /* Check for a sign character*/
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	} else if (s[i] == '+')
	{
		i++;
	}

    /* Iterate through the remaining characters and convert to an integer*/
    while (s[i] >= '0' && s[i] <= '9')
	{
        /* Check for integer overflow*/
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			return (sign == 1) ? 2147483647 : -2147483648;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}
