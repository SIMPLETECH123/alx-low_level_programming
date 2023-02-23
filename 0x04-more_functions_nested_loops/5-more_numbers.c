#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 * Return: no return
 */
void more_numbers(void)
{
	int c;

	int i;

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
