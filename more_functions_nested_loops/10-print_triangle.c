#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 *
 * Description: This function prints a right-aligned triangle
 * using the '#' character followed by a new line. If the size
 * is 0 or less, it prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

