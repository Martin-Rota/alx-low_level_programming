#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, const char *src, int n)

{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr)
		dest_ptr++;

	/* Append at most n bytes from the source string */
	while (*src && n > 0)
	{
		*dest_ptr++ = *src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
