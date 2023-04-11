#include "main.h"

/**
 * create_file - function that create a file
 * @filename:name ofc the file
 * @text_content:input
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, res_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = 0;
	if (text_content != NULL)
	{
		if (text_content[len] != '\0')
			len++;
		res_write = write(fd, text_content, len);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	else
	{
		res_write = write(fd, text_content, 0);
	}
	close(fd);
	return (1);
}
