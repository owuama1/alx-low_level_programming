#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the minimum num of coins to make change for an amount of money.
*@argc: argument count
*@argv: argument value
*Return: 0
*/
int main(int argc, char *argv[])
{
	int cents;
	int coins;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins, i;

	if (argc != 2)
	{
		printf("Error\n"); /*Incorrect number of arguments*/
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n"); /* Negative input*/
		return (0);
	}

	coins = 0;

	for (i = 0; i < 5; i++)
	{
		num_coins = cents / coin_values[i];
		coins += num_coins;
		cents %= coin_values[i];
	}

	printf("%d\n", coins);
	return (0);
}
