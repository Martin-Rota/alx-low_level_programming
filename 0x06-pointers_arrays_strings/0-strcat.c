#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, const char *src)

{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr)
		dest_ptr++;

	/* Append the source string to the destination string */
	while (*src)
		*dest_ptr++ = *src++;

	/* Add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
