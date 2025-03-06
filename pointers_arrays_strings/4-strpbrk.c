#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string being evaluated
 * @accept: bytes being searched for
 *
 * Return: pointer to the byte in a or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int string;

	for (string = 0; s[string] != '\0'; string++)
	{
		int substring = 0;

		while (accept[substring] != '\0')
		{
			if (s[string] == accept[substring])
			{
				return (s + string);
			}
			substring++;
		}
	}
	return (NULL);
}
