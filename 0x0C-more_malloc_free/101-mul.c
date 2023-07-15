#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * validate_input - Validate if string contains only digits
 * @num: The string to be validated
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int validate_input(char *num)
{
	int i;

	i = 0;
	while
		(num[i] != '\0');
		i++;

	if (!isdigit(num[i]))
		return (0);

	else
		return (1);
}

/**
 * multiply_numbers - Multiply two numbers and print the result
 * @num1: The first number to be multiplied
 * @num2: The second number to be multiplied
 */

void multiply_numbers(char *num1, char *num2)
{
	int result;

	result = atoi(num1) * atoi(num2);
	printf("%d\n", result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply_numbers(argv[1], argv[2]);

	return (0);
}
