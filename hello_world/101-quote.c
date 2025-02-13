/*
 * main - Prints a quote to standard error
 *
 * Description:
 *   The main function prints a quote to the standard error using the fwrite
 *   function and returns 1 to indicate an error status.
 *
 *   The quote printed is:
 *   "and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: 1 (error status)
 */
#include <stdio.h>

int main(void)
{
    fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 1, 59, stderr);
    return (1);
}
