
#include <main.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 *         If filename is NULL, return -1
 *         If text_content is NULL, do not add anything to the file.
 *         Return 1 if the file exists and -1 if the file does not exist
 *         or if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, text_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
