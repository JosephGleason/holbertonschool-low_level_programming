#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory Area
 * @src: Memory Area
 * @n: number byte to fill
 * Return: Memory Area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
