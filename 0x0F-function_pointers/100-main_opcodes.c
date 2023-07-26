#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array containing command-line arguments.
 *
 * Return: 0 on success, 1 number of arguments is incorrect
 *         2 if the number of bytes is negative.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes;

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *main_ptr;
	int i;

	main_ptr = (unsigned char *)&main;
	i = 0;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", main_ptr[i]);
	}

	printf("%02x\n", main_ptr[num_bytes - 1]);
	return (0);
}
