#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the number to allocate memory for
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *one;

	one = malloc(b);

	if (one == NULL)
	{
		exit(98);
	}
	else
	{
		return (one);
	}
}
