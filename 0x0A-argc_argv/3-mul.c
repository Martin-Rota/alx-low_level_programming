#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: (0) on success, (1) on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, mux;

	/* Check if two arguments are provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mux = num1 * num2;

	printf("%d\n", mux);

	return (0);
}
