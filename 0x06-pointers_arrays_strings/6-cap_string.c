#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */

char *cap_string(char *str)

{
	int i, j;
	int capitalize_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 'a' + 'A';

		capitalize_next = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
	}

	return (str);
}
