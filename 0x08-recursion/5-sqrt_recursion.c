#include "main.h"

/**
 * _sqrt_recursion - square root.
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (i * i == n && i > 0)
		return (i);
	else
		return (-1);
	i--;
	return (_sqrt_recursion(n));
}
