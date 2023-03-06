#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer variable
 * @b: byte
 * @n: number of byte to be changed
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
