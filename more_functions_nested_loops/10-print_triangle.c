#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: The size of the triangle.
 *
 * Description: This function prints a right-aligned triangle
 * using the '#' character followed by a new line. If the size
 * is 0 or less, it prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, block;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
		{
			_putchar(' ');
		}

		for (block = 0; block < row; block++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
