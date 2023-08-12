#include "main.h"

/**
* create_file -  creates a file.
* @filename: name of the file to create.
* @text_content: a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	FILE *fd;
	size_t written_bytes, i;

	if (filename == NULL)
		return -1;

	fd = fopen(filename,"w");
	if(fd == NULL)
		chmod(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	written_bytes = 0; 
	for (i = 0; i < strlen(text_content); i++)
	{
		if (fputc(text_content[i], fd) != EOF)
		{
			written_bytes++;
		}
		else
		{
			break;
		}
	}
	if (fclose(fd) == EOF)
		return -1;

	if (written_bytes == strlen(text_content))
	{
		fchmod(fileno(fd), S_IRUSR | S_IWUSR);
		return (1);
	}
	else
	{
		return (-1);
}
