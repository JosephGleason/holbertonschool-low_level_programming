/*
 * main - Prints a quote to standard error
 *
 * Description:
 *   The main function prints a quote to the standard error using the write
 *   system call and returns 1 to indicate an error status.
 *
 *   The quote printed is:
 *   "and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1 (error status)
 */
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
