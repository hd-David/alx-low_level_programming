#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd = open(filename, O_RDONLY);
char *buffer = malloc(sizeof (char) * (letters +1));
ssize_t bytes_read = read(fd, buffer, letters);
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);


if (filename == NULL)
return (0);

if (fd == -1)
return (0);

if (buffer == NULL)
{
close(fd);
return (0);
}

if (bytes_read == -1)
{
close(fd);
free(buffer);
return (0);
}

buffer[bytes_read] = '\0';

if (bytes_written == -1 || bytes_written != bytes_read)
{
close(fd);
free(buffer);
return (0);
}
close(fd);
free(buffer);

return (bytes_written);
}
