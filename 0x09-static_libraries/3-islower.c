#include "main.h"
/**
 * _islower - check for lower case letters
 *
 * @c: The character in ASCII code
 *
 * Return: 0 always.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
