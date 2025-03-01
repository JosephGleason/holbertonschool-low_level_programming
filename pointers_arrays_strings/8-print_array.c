#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer to array
 * @n: number of elements of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);

}
