#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of ints.
 * @width: the width fo the grid (# of columns)
 * @height: the height of the grid (# of rows)
 *
 * Return: pointer to the 2D array, or NULL if width or
 * height is 0 or negative or if malloc fails.
 */
int **alloc_grid(int width, int height)
{
	int **output;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	output = malloc(sizeof(int *) * height);

	if (output ==  NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);

		if (output[i] == NULL)
		{
			free(output);

			for (j = 0; j <= height; j++)
			{
				free(output[j]);
			}
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			output[i][j] = 0;
		}
	}
	return (output);
}
