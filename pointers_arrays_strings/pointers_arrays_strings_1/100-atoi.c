#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int digit;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';  /* Convert char to int */

		if (num > 214748364 || (num == 214748364 && digit > 7))
		{
			if (sign == 1)
				return (2147483647); /* Max positive value */
			else
				return (-2147483648); /* Max negative value */
		}

		num = num * 10 + digit;
		i++;
	}

	return (num * sign);
}

