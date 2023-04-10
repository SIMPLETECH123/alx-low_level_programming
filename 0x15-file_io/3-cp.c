#include "main.h"
/**
 * cp_file_from file_to - program that copies the content of a file to another file.
 * @src_file:file to copy to
 * @dest_file:file to copy to
 * @text_content:input.
 */
void cp(char *src_file,char *dest_file)
{
	int fd, fd2, res_read, res_write;
	char *buff[1024];

	if (src_file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	fd = open(src_file, O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		exit(98);
	}
	fd2= open(dest_file, O_CREAT | O_WRONLY	| O_TRUNC, 0664);
	if (fd2 < 0)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
	do
	{
		res_read = read(fd, buff, 1024);
		if (res_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
			exit(98);
		}
		res_write = write(fd2, buff, res_read);
		if (res_write < res_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
	}
	while (0);
	{
		if (close(fd) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		if (close(fd2) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
	}
	close(fd);
	close(fd2);
}
/**
 * main - test
 * @argc: argument count.
 * @argv: array
 * Return: 0 always (success).
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
