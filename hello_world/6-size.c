#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the size of various data types
 *              on the computer it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void) {

    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu bytes(s)\n", sizeof(long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
 
    return (0);
}
