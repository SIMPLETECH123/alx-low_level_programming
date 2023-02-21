#include <stdio.h>
/**
 * main - lowercase of the alphabelt followed by a new line
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int a;

	int b;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
