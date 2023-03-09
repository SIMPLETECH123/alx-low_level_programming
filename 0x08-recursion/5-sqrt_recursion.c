#include "main.h"

/**
 * subtractor - function that subtract consecutive odd numers from n
 * @n: the number
 * @i: prime number
 * Return: times 0dd number were subtracted
 */
int subtractor(int n, int i)
{
	n -= i;
	if (n == 0)
		return ((i + 1) / 2);
	if (n < 0)
		return (-1);
	return (subtractor(n, i + 2));
}

/**
 * _sqrt_recursion - square root.
 * @n: input
 * Return:0 always
 */
int _sqrt_recursion(int n)
{
	return (n == 0 ? 0 : (subtractor(n, 1)));
}
