#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, j;
	int mask_length = 0;

	for (j = n; j > 0; j >>= 1)
	{
		mask_length += 1;
	}
	mask_length -= 1;

	if (n > 0)
	{
		mask = mask << mask_length;

		while (mask > 0){
			printf("%lu", n & mask);
			mask >>= 1;
		}
	}
	else
	{
		putchar('0');
	}
}
