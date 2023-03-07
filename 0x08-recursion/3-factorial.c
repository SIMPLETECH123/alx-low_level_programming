#include "main.h"

/**
 * factorial - function that returns the factorial
 * @n: factorial of number
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if ((n <= 1) && (n > 0))
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
