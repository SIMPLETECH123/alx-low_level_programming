#include <stdio.h>
/**
 * main - lowercase alphabelt in reversed order
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char f;

	for (f = 'z'; f => 'a'; f--)
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
