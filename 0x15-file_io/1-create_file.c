#include "main.h"

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - creates a new file and writes a string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file (NULL if empty)
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
size_t len = strlen(text_content);
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWU\
SR);
ssize_t written = write(fd, text_content, len);

if (filename == NULL)
return (-1);


if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{

if (written != (ssize_t) len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
