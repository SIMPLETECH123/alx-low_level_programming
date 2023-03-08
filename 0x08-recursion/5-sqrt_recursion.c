#include "main.h"

/**
 * _sqrt_recursion - square root.
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if ((n / 2) * (n / 2) == n && (n / 2) > 0)
		return (n / 2);
	else
		return (-1);
	(n / 2)--;
	return (_sqrt_recursion(n / 2));
}
