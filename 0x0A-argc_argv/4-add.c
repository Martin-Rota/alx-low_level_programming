#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int sum, i, num, j;
	bool hasError, validNumber;

	sum = 0;
	hasError = false;
	i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		num = 0;
		validNumber = true;
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				validNumber = false;
				break;
			}
			j++;
		}

		if (validNumber)
		{
			num = atoi(argv[i]);
			if (num > 0)
				sum += num;
			else
				validNumber = false;
		}

		if (!validNumber)
		{
			hasError = true;
			break;
		}

		i++;
	}

	if (hasError)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", sum);
	}

	return (hasError ? 1 : 0);
}
