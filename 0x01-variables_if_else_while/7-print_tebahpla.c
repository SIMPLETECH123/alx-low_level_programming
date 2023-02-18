#include <stdio.h>
/**
 * main - lowercase alphabelt in reversed order
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char f[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(f[i]);
	}
	putchar('\n');
	return (0);
}
