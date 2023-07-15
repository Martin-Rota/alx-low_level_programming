#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Check if string consists of only digits.
 * @str: The string to be checked
 *
 * Return: 1 if the string consists of only digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - Calculate length of string
 * @str: The string to be measured.
 *
 * Return: The length of string.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * _multiply - Multiply two positive numbers and print the result.
 * @num1: The first number to be multiplied.
 * @num2: The second number to be multiplied.
 */
void _multiply(char *num1, char *num2)
{
	int len1;
	int len2;
	int len_result;
	int *result;
	int i, j, carry, num;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			num = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = num % 10;
			carry = num / 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (i < len_result - 1 && result[i] == 0)
		i++;

	for (; i < len_result; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point of program
 * @argc: The number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	_multiply(argv[1], argv[2]);

	return (0);
}
