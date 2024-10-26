#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0)
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar('W' + i);
	}
		putchar('\n');
		
	return (0);
}
