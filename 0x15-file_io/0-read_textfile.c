#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it
 * @filename:name of the file
 * @letters:sise of letrters to occupy the file.
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdis;
	ssize_t res_read, res_write;
	char *buff;

	if (filename == NULL)
		return (0);
	fdis = open(filename, O_RDONLY);
	if (fdis == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	res_read = read(fdis, buff, letters);
	if (res_read == -1)
	{
		free(buff);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buff, res_read);
	if (res_write == -1 || res_write != res_read)
	{
		free(buff);
		return (0);
	}
	return (res_read);
}
