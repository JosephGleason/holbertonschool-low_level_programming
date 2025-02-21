#include "main.h"
/**
 *times_table - holds the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int table = row * column;

			if (table < 10)
			{
				if (column > 0)
				{
					_putchar (' ');
				}
				_putchar (table + '0');
			}
			else
			{
				_putchar(table / 10 + '0');
				_putchar(table % 10 + '0');
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
