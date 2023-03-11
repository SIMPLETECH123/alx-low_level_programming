#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @str: the string to get the lenght of
 * Return: the lenght of @str
 */
size_t _strlen(char *str)
{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}
