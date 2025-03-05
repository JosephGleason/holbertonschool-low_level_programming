#include "main.h"
#include "2-strchr.c"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: input string
 * @accept: set of characters to match against
 *
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s))
	{
		count++;
		s++;
	}

	return (count);
}
