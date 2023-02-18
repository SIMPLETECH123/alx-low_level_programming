#include <stdio.h>
/**
 * main - all possible combo of single digit numbers
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int j;
	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
