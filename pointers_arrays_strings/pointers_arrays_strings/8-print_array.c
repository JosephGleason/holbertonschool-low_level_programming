#include <stdio.h>
#include "main.h"

/**
 * print_array - function to print array of integers
 * @a : array
 * @n : number printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
