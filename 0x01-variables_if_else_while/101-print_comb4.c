#include <stdio.h>
/**
 * main - all possible combinatio of 3 digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a = 0;

	int b;

	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (!(a == 7 && b == 8 && c == 9))
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
