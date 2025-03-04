#include "main.h"

/**
 * _memset - fill memory with const byte
 *
 * @s: pointer to memory to be filled
 * @b: const byre to fill
 * @n: number byte to fill
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
