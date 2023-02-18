#include <stdio.h>
/**
 * main - all digit number from 0 to 10
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar("\n");
	return (0);
}
