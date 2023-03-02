#include "main.h"

/**
 * _strncpy - fnction that copies a string
 * @dest: input
 * @src: input
 * @n: number of element
 * Return: dest0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
