#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer variable
 * @c: char to locate
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
}
