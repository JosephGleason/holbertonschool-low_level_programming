#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: (0)
 *
 **/
int main(void)
{
	char letters = 122;

	while (letters > 96)
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}
