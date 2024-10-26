#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *arr = "_putchar\n";

	while (*arr)
	{
	_putchar(*arr);
		arr++;
	}
	return (0);
}
