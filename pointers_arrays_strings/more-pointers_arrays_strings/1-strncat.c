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
	int str1 = 0;
	int str2 = 0;

	while (dest[str1] != '\0')
	{
		str1++;
	}

	for (str2 = 0; str2 < n && src[str2] != '\0'; str2++)
	{
		dest[str1 + str2] = src[str2];
	}

	dest[str1 + str2] = '\0';

	return (dest);
}
