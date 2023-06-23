#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 **/

int print_last_digit(int n)
{
	long long abs_val = labs((long long)n);
	n = abs_val % 10;

	if (n < 0)
	{
		n = -n;
	}
	else
	{
		_putchar(n + '0');
	}
	return (n);
}
