#include "main.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: factorial of number
 * Return: -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	n--;
	return (n = n * factorial(n));
}
