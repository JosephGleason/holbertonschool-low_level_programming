#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string being evaluated
* @accept: bytes being searched for
*
* Return: pointer to the byte in a or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

		for (i = 0; s[i]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				return (s + i);
			}
		}

		return (0);
}
