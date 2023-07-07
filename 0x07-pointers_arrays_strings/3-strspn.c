#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the bytes to be matched
 * Return: The number of bytes in the initial segment of s that match accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}

		if (!match)
			break;
		count++;
		s++;
	}
	return (count);
}
