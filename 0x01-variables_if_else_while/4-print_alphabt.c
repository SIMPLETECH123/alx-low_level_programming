#include <stdio.h>
/**
 * main - alphabelt in lower case except q and e
 *
 * Return: 0 always (success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
			c++;
	}
	putchar('\n');
	return (0);
}
