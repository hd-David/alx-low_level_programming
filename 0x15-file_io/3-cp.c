#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{

char buffer[BUFFER_SIZE];
ssize_t nread, nwritten;

int fd_from = open(argv[1], O_RDONLY);
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR| S_IRGRP | S_IWGRP | S_IROTH);


if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}
if (fd_from == -1)
{
fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
exit(98);
}

if (fd_to == -1)
{
fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
exit(99);
}
while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
nwritten = write(fd_to, buffer, nread);
  
if (nwritten == -1)
{
fprintf(stderr, "Error: Can't write to file %s: %s\n", argv[2], strerror(errno));
exit(99);
}
if (nwritten != nread)
{
fprintf(stderr, "Error: Short write to file %s\n", argv[2]);
exit(99);
}
}

if (nread == -1)
{
fprintf(stderr, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
exit(98);
}

if (close(fd_from) == -1)
{
fprintf(stderr, "Error: Can't close file %s: %s\n", argv[1], strerror(errno));
exit(100);
}

if (close(fd_to) == -1)
{
fprintf(stderr, "Error: Can't close file %s: %s\n", argv[2], strerror(errno));
exit(100);
}

return (0);
}
