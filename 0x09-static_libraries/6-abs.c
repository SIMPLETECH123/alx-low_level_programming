#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 *
 * @n: input number as an intege
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
