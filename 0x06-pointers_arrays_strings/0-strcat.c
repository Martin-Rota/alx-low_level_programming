#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the length of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* Add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
