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
	char str[letters];
	FILE *fd = NULL;
	ssize_t count;

	fd = fopen(filename,"r");
	if(fd == NULL)
		return (0);

	count = 0;
	while (fgets(str, letters, fd)) != NULL)
	{
		fputs(str,stdout);
		if (fputs(str,stdout) == EOF)
			return (0);
		count += strlen(str);
	}

	fclose(fd);

	return (count);
}
