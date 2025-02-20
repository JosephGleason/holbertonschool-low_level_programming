#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	int out;
	int in;

	for (out = 0; out < 10; out++)
	{
		for (in = 97; in <= 122; in++)
		{
			_putchar(in);
		}
		_putchar('\n');
	}
}
