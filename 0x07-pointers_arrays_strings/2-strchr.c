#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 * Return: A pointer to 1st occurence of C, Null if not found
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			s++;
	}

	if (*s == c)
		return (s);
	else
		return (NULL);
}
