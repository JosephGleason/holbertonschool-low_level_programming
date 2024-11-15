#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value of the string, or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int track = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (track > (2147483647 - (s[i] - '0')) / 10)
			return ((sign == 1 ? 2147483647 : -2147483648));

		track = track * 10 + (s[i] - '0');
		i++;
	}

	return (track * sign);
}

