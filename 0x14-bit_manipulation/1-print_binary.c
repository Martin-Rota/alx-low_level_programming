#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned int binary_digit, binary = 0;
	int i = 1;

	if (n > 0)
	{
		while (n > 0)
		{
			binary_digit = n & 1;
			binary += binary_digit * i;
			n >>= 1;
			i *= 10;
		}
	printf(" %u\n", binary);
	}

	else
		printf(" 0\n");
}
