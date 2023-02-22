#include "main.h"
/**
 * print_alphabet_x10 - print alphabelt 10 times
 *
 * Return: 0 always(success)
 */
void print_alphabet_x10(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
