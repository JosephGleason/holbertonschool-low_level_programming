#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
    int left = 0, right = 0;
    char temp;

    while (s[right] != '\0')
    {
        right++;
    }
    right--;

    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

