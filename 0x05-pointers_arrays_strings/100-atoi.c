#include "main.h"
#include <stdbool.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	bool foundNumber = false;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			foundNumber = true;
		}
		else if (foundNumber)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}

