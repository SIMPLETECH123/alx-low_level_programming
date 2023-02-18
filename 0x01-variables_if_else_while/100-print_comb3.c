#include <stdio.h>
/**
 * main -possible combination of 2 digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int f = '0';

	int s = '0';

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			if (!((f == s) || (f > s)))
			{
				putchar(f);
				putchar(s);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
