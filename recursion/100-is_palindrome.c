#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

/**
 * check_pal - Checks if a substring is a palindrome
 * @s: The string
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if substring is palindrome, 0 otherwise
 */
int check_pal(char *s, int start, int end)
{
    if (start >= end)
        return 1;  /* All checks done successfully */
    if (s[start] != s[end])
        return 0;  /* Mismatch found */
    /* Move inward and check further */
    return check_pal(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    if (len <= 1)
        return 1;  /* Empty or single-character string is trivially palindrome */

    /* Use helper function to compare characters from both ends */
    return check_pal(s, 0, len - 1);
}
