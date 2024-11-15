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
	int dlength = 0;
	int slength = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dlength++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		slength++;
	}
	for (i = 0; i <= slength; i++)
	{
		dest[dlength + i] = src[i];
	}
	return (dest);
}
