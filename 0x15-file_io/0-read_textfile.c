#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File to read from
 * @letters: The number of letters it should read and print
 *
 * Return: actual number of letters it could read and print;
 *         0 if the file cannot be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    ssize_t n_read = 0, n_written = 0;
    char *buffer;

    if (filename == NULL)
      return (0);

    file = fopen(filename, "r");
    if (file == NULL)
      return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        fclose(file);
        return (0);
    }

    n_read = fread(buffer, sizeof(char), letters, file);
    if (ferror(file)) {
        free(buffer);
        fclose(file);
        return (0);
    }

    n_written = fwrite(buffer, sizeof(char), n_read, stdout);
    if (n_written < n_read) {
        free(buffer);
        fclose(file);
        return (0);
    }

    free(buffer);
    fclose(file);
    return (n_written);
}
