#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The number to be printed
 *
 * Description: This function prints an integer using the _putchar function.
 * It handles both positive and negative numbers.
 */

void print_number(int n)

{
	unsigned int divisor, digit, positive = n;
	double tens_place = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (tens_place <= positive)
			tens_place *= 10;
		divisor = tens_place / 10;

		while (divisor >= 1)
		{
			digit = positive / divisor;
			_putchar(digit + '0');
			positive = positive - (divisor * digit);
			divisor /= 10;
		}
	}
}
