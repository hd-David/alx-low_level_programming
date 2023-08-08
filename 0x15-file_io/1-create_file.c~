#include "main.h"

/**
 * create_file - Creates a file with the specified permissions
 * and writes the provided text content into it
 * @filename: The name of the file to create
 * @text_content: The NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *         (file cannot be created, file cannot be written,
 * write "fails", etc...)
 *         The created file must have the permissions rw-------.
 *         If the file already exists, it will be truncated.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, result, text_length;

	if (filename == NULL)
       return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
       return (-1);

	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;

		result = write(fd, text_content, text_length);
		if (result == -1)
		{
			close(fd);
			 return (-1);
		}
	}

	close(fd);
	 return (1);
}
