#include <stdio.h>
/**
 * main - print alphabelt 10 times
 *
 * Return: 0 always(success)
 */
int main(void)
{
	int a;

	int i;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	i = a;

	while (i <= 10)
	{
		putchar(a);
		i++;
	}
	return (0);
}
