#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
    int a, b;

    if (n > 0)
    {
        for (a = 0; a < n; a++)
        {
            for (b = 0; b < a; b++)
                _putchar(' ');
            _putchar('\\');
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}

