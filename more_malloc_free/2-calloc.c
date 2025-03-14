#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return: A pointer to the allocated memory. NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *one;

	if (nmemb == 0 || size == 0)
		return (NULL);

	one = malloc(size * nmemb);

	if (one == NULL)
		return (NULL);

	/* Initialize all bytes to 0 */
	for (i = 0; i < (size * nmemb); i++)
	{
		one[i] = 0;
	}

	return (one);
}
