#include <stdio.h>
/**
 * main - print alphabelt 10 times
 *
 * Return: 0 always(success)
 */
int main(void)
{
	int i, b = 'z', c = 'a':: ;
	for (i = 0; i <= 10; i++)
	{
		while (c <= b) {
			putchar(c);
			putchar(i);
			c++;
			
		}
		putchar('\n');
	}
	return (0);
}
