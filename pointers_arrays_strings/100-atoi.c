#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	/* Step 1: Traverse the string */
	while (s[i] != '\0')
	{
		/* Handle sign */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		/* Convert digits to integer */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1; /* Mark that we found a number */
			result = result * 10 + (s[i] - '0');
		}
		/* Stop conversion when digits end */
		else if (found_digit)
			break;

		i++;
	}

	return (result * sign);
}
