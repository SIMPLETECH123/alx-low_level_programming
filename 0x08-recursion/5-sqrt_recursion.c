#include "main.h"

/**
 * _sqrt_recursion - square root.
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
	{
		for (i = 0; i <= n/2; i++)
		{
			if(i * i == n)
				return (i);
			else
				return (-1);
		}
	}
}
