#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to be encoded.
 * Return: pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_map[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet_replace[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j])
				str[i] = leet_replace[j];
		}
	}
	return (str);
}
