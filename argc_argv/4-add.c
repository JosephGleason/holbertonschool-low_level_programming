#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Checks if a string is a number
 * @s: The string to check
 * Return: 1 if string is a number, 0 otherwise
 */
int main (int argc, char *argv[])
{
	int i, j, sum = 0;
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
}
