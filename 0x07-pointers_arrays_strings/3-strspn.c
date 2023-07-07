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
	char *original_accept = accept;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (!match)
			break;
		s++;
		accept = original accept;
	}

	return (count);
}
