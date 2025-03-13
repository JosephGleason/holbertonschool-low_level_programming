#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Number of command-line arguments.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */
int main(argc, argv)
	int argc;
	char *argv[];
{
	int cents, i, coins;
	int coin_values[5] = {25, 10, 5, 2, 1};

	/* Check for exactly one argument (excluding program name) */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert argument to integer using atoi */
	cents = atoi(argv[1]);

	/* If the number is negative, print 0 and exit */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	/* For each coin value, determine how many coins of that value are needed */
	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	/* Print the minimum number of coins needed, followed by a new line */
	printf("%d\n", coins);
	return (0);
}
