#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int str1, str2;

	for (str1 = 0; dest[str1] != '\0'; str1++)
		;

	for (str2 = 0; src[str2] != '\0'; str2++, str1++)
	{
		dest[str1] = src[str2];

	}
	dest[str1] = '\0';

	return (dest);
}
