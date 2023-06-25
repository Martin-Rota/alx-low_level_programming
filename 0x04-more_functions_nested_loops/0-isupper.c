#include "main.h"

/**
 * _isupper - Checks if uppercase and returns 1.
 * returns 0 if lowercase
 * @c: this is the entry
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
