#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strncat(char *dest, const char *src, int n)

{
	char *dest_ptr = dest;

	while (*dest_ptr)
		dest_ptr++;

	while (*src && n > 0)
	{
		*dest_ptr++ = *src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
