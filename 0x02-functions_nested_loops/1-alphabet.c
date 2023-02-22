#include "main.h"

/**
 * print_alphabelt - lowercase of the alphabelt followed by a new line
 *
 * Return: always 0.
 */
void print_alphabelt(void)
{
	char i;

	for (i ='a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
