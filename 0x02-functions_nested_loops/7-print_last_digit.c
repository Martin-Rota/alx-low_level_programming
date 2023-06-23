#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 **/

int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 0;
		_putchar(last_digit + '0');
	}
	else
	{
		int abs_val = abs(n);

		last_digit = abs_val % 10;

	}

	return (last_digit);
}
