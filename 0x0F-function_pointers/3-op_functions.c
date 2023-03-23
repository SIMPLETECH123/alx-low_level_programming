#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add -function that adds
 * @a:first integer
 * @b:second integer
 *
 * Return:sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtract
 * @a:first integer
 * @b:second integer
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a:first integer
 * @b:second integer
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a:first integer
 * @b:second integer
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus
 * @a:first integer
 * @b:second integer
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
