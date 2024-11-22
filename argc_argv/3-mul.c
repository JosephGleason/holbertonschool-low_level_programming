#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: counter
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int input1 = atoi(argv[1]);
		int input2 = atoi(argv[2]);

		printf("%d\n", input1 * input2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
