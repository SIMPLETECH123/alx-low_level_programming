#include "main.h"

/**
 * print_alphabelt - lowercase of the alphabelt followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
