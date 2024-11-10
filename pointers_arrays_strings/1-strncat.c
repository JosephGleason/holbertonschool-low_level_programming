#include "main.h"

/**
 * _strncat - concatenate two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0;
	int i;

	for (dlength = 0; dest[dlength] != '\0'; dlength++)
	{
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlength + i] = src[i];
	}

	dest[dlength + i] = '\0';

	return (dest);
}
