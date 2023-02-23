#include "main.h"

/**
 * _isupper - a function that check for upper case character
 * @c: input character
 * Return: if upper case amd 0 if any other
 */

int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
