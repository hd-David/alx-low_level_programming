#include "main.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, ret;
ssize_t nread, nwritten;
char buffer[BUFFER_SIZE];
struct stat st;

/* Check the number of arguments */
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

/* Open the source file */
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Check if the destination file already exists */
ret = stat(argv[2], &st);
if (ret == 0)
{
fd_to = open(argv[2], O_WRONLY | O_TRUNC);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
else
{
/* Destination file does not exist */
fd_to = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/* Copy the contents of the source file to the destination file */
while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
nwritten = write(fd_to, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
else
{
/* Destination file does not exist */
fd_to = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/* Copy the contents of the source file to the destination file */
while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
nwritten = write(fd_to, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

if (nread == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

/* Close the file descriptors */
ret = close(fd_from);
if (ret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

ret = close(fd_to);
if (ret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return (0);
}
