#include "main.h"

/**
 * _isupper - Checks if the character is uppercase
 * @c: The character to be checked
 * Return 1 if uppercase, 0 otherwise
 **/

int _isupper(ixnt c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
