#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1:first string
 * @s2: second string
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && (*s2 == '*' || *s2 == ' '))
		return (1);
	else
		return (0);
	return (wildcmp(s1, s2));
}
