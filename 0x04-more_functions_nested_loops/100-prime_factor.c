#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */

unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long largest_factor = 2;

	while (n > largest_factor)
	{
		if (n % largest_factor == 0)
		{
			n /= largest_factor;
		}
		else
		{
			largest_factor++;
		}
	}

	return (largest_factor);
}
