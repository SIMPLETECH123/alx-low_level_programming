#include "main.h"
/**
 * _isdigit - a function that check for a digit
 * @c: input number
 * Return: 1 if it is a digit and 0 if it is'nt
 */

int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
