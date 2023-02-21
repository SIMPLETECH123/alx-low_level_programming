#include "main.h"

/**
 * print_alphabelt - lowercase of the alphabelt followed by a new line
 *
 * Return: always 0.
 */
void print_alphabelt(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
}
