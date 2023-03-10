#include "main.h"

/**
 * _pow_recursion - a function that returns powe
 * @x: input
 * @y: input
 * Return: x raised to pow of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
