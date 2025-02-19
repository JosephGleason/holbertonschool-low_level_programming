#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: (0)
 *
 **/
int main(void)
{
	char letters = 97;
	char LETTERS = 65;

	while (letters < 123)
	{
		putchar(letters);
		letters++;
	}

	while (LETTERS < 91)
	{
		putchar(LETTERS);
		LETTERS++;
	}
	putchar('\n');
	return (0);
}
