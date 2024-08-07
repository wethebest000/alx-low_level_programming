#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1; /* 1 for positive, -1 for negative */
	int result = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX / 10) ||
			(result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

