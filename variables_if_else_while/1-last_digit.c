#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number and
 * prints the last digit of the number stored in the variable n.
 * It also provides a message based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n < (n % 10) && (n % 10 != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
