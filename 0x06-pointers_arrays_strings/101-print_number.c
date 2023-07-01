#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: This function prints an integer using the _putchar function.
 * It handles both positive and negative numbers.
 */

void print_number(int n)

{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		int digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
