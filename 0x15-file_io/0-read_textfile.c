#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "main.h"

/**
 * read_textfile - Reads a text file and prints its contents to standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 *         0 if the file cannot be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters);

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, num_letters_read, num_letters_written;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	num_letters_read = read(file_descriptor, buffer, letters);

	num_letters_written = write(STDOUT_FILENO, buffer, num_letters_read);

	close(file_descriptor);
	free(buffer);

	return (num_letters_written);
}
