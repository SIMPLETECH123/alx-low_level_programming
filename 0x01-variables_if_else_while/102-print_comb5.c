#include <stdio.h>
/**
 * main - all possible combination of two digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a != 99 || b != 99);
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
