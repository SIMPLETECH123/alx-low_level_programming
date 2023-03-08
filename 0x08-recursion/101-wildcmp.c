#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1:first string
 * @s2: second string
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (0);
	}
	return (wildcmp(s1, s2 + 1));
}

