#include <stdio.h>
/**
 * main - all numbers of base 16 in lowercase
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char hexa[] = "0123456789abcdef";

	int a;

	for (a = 0; a < 16; a++)
	{
		putchar(hexa[a]);
	}
	putchar('\n');
	return (0);
}
