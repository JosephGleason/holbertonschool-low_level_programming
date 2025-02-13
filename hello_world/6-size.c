#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the size of various data types
 *              on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %c bytes(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of int: %ld byte(s)\n", sizeof(long int));
	printf("Size of int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of int: %f byte(s)\n", sizeof(float));

	return (0);
}
