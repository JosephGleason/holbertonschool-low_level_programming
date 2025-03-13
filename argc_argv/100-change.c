#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int cents, i, coins;
	int coin_values[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}
	printf("%d\n", coins);
	return (0);
}
