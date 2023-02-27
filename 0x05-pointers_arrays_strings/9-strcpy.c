#include "main.h"

/**
 * _strcpy -  copy the string pointed to
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + lens);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
