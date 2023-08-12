#include "main.h"

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output
* @filename: File to read from
* @letters: The number of letters it should read and print
*
* Return: actual number of letters it could read and print.
*	: O if filename is null or if write fails.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int c;
	FILE *fd = NULL;
	size_t count;

	if (filename == NULL)
		return (0);

	fd = fopen(filename,"r");
	if(fd == NULL)
		return (0);

	count = 0;
	while (count < letters && (c = fgetc(fd)) != EOF)
	{
		putchar(c);
		count ++;
	}

	fclose(fd);

	if (ferror(fd))
		return (0);

	return (count);
}
