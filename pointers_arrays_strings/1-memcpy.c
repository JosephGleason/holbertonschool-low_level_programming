#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory Area
 * @src: Memory Area
 * @n: number byte to fill
 * Return: Memory Area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
