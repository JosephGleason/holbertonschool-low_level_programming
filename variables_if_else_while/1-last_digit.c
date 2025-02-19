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
 * Return: (0)
 **/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	printf("Last digit of %d is %d", n, digit);

	if (digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (digit == 0)
	{
		printf("and is 0\n");
	}
	else 
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
