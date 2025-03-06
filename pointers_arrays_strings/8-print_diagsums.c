#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals in square matrix
 * @a: the array representing the square matrix
 * @size: the dimensions (size) of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal = 0;
	int anti = 0;

	for (i = 0; i < size; i++)
	{
		diagonal += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		anti += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diagonal, anti);
}
