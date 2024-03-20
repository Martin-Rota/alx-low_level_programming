#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b) 
{
	// Check if the input is NULL
	if (b == NULL) {
	return (0);
	}

	unsigned int result = 0;
	int i = 0;
	// Iterate through each character in the string
	for (int i = 0; b[i] != '\0'; i++)
	{
	// Check if the current character is not '0' or '1'
		if (b[i] != '0' && b[i] != '1')
			return (0);
	// Shift the current result left by 1 bit and add the current digit
			result = result * 2 + (b[i] - '0');
	}

	return (result);
}
D
C
}

}
