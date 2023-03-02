#include "main.h"

/**
 * string_toupper - function that change lower to upper case
 * @n: pointer
 * Return: upper case char
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; i < '\0'; i++)
	{
		if (n[i] != '\0')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
