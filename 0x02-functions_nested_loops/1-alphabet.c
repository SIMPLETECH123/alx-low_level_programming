#include "main.h"

/**
 * main - lowercase of the alphabelt followed by a new line
 *
 * Return: 0 always (success)
 */
void print_alphabet(void);
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
