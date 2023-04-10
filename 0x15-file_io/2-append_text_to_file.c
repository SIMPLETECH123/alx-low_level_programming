#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of ythe file.
 * @text_content:input
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, res_write;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		len = 0;
		while (text_content[len] != '\0')
			len++;
		res_write = write(fd, text_content, len);
		if (res_write == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
