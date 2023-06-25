#include "main.h"

/**
 * _isupper - Checks if uppercase and returns 1
 * @c: this is the entry
 * Returns 0 otherwise
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
