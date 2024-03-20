#include "main.h"

/**
* flip_bits -  returns number of bits to flip to get from one number to another
* @n: decimal number
* @m: decimal
*
* Return: number of bits flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits;

	xor = n ^ m;
	bits = 0;

	while (xor > 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
