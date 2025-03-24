#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Number of command line arguments.
 * @argv: Array of command line argument strings.
 *
 * Return: 0 on success, 1 if argument count is wrong, or 2 if bytes is negative.
 */
int main(int argc, char *argv[])
{
	int n, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Cast the main function address to an unsigned char pointer
	   so we can access the raw opcodes one byte at a time */
	ptr = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02x", ptr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
