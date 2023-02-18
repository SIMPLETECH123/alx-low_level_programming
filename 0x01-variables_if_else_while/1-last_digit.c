#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine the last digit of a number whether
 * whether it is greater than 5,equal to 0 and less than 6
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	else
	((n < 6) && (n != 0));
	{
		printf("Last digit on n is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
