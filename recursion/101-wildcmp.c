#include "main.h"

/*
 * wildcmp - compares two strings and returns 1 if the strings can be
 *           considered identical, otherwise returns 0.
 * @s1: the first string
 * @s2: the second string, which may contain the special character '*'
 *      that can match any string (including an empty string)
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    /* If both strings are empty, they are identical */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* If s2 is '*' and it is the last character, it can match any string */
    if (*s2 == '*' && *(s2 + 1) == '\0')
        return (1);

    /* If s2 is '*', there are two possibilities:
       1. '*' matches no character: move s2 forward
       2. '*' matches one or more characters: move s1 forward */
    if (*s2 == '*')
        return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

    /* If the current characters match, compare the rest */
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    /* Otherwise, the strings do not match */
    return (0);
}
