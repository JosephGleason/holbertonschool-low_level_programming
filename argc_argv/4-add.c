#include <stdio.h>
#include <stdlib.h>

/**
 * num_check - Checks if a string is a number
 * @s: The string to check
 * Return: 1 if string is a number, 0 otherwise
 */
int num_check(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (num_check(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
