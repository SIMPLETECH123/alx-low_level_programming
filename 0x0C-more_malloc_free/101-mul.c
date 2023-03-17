#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * digitcheck - function that check for digits
 * @s:the string to be checked
 *
 * Return:0 if digit else return 1.
 */
int digitcheck(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles error for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function that multiplies two positive number
 * @argv: array of arguement
 * @argc: number of arguement
 * Return: 0 always success
 */
int main( int argc, char *argv)
{
	int i, d;
	int mul, s1, s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 2 || !digitcheck(s1) || !digitcheck(s2))
		errors();

	mul = argv[1] * argv[2];
	printf("%d\n", mul);
	return (0);
}
