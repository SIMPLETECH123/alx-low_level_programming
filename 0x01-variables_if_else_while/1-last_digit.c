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
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit on %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
