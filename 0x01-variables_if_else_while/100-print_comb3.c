#include <stdio.h>
/**
 * main -possible combination of 2 digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int f = 0;

	int s;

	for (f = 0; f <= 9; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');
				if (!(f == 8 && s == 9))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
