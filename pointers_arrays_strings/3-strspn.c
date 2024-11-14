#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: input string
 * @accept: Set of characters to match against
 *
 * Return: Length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (accept[j] == '\0')
		{
			return (i);
		}

		i++;
	}

	return (i);
}

