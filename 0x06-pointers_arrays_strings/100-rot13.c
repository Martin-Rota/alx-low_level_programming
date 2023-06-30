#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the resulting encoded string.
 */

char *rot13(char *str)

{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is an alphabet */
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Find the corresponding index in the alphabet array */
			for (j = 0; alpha[j] != '\0'; j++)
			{
				if (str[i] == alpha[j])
				{
					/* Replace the character with its ROT13 equivalent */
					str[i] = rot13[j];
					break;
				}
			}
		}
	}

	return (str);
}
