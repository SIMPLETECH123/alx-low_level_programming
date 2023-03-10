#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
