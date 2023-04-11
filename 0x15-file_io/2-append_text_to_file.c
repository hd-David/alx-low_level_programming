#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_APPEND);
ize_t len = strlen(text_content);
ssize_t written = write(fd, text_content, len);

if (filename == NULL)
return (-1);

if (fd == -1)
return (-1);

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
