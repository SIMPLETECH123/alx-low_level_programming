#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer variable
 * @c: char to locate
 * Return: 0 always
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
