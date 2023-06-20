#include <stdio.h>

/**
 *main - prints hexadecimal base 0123456789abcdef, using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	for (i = 0; i < 6; i++)
	{
		putchar(n + 'a')
	}

	putchar('\n');

	return (0);
}
