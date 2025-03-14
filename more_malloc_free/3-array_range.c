#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the smallest integer in the array
 * @max: the largest integer in the array
 *
 * Return: the pointer to the newly created array, NULL if min > max,
 * NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
