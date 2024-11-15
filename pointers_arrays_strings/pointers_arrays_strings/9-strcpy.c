#include "main.h"

/**
 * _strcpy - function to copy array
 * @dest : pointer to an array
 * @src : pointer to an array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
