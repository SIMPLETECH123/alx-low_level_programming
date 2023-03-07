#include "main.h"

/**
 * is_prime_number - function that discern primenumbers
 * @n: the number
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	if ((n % 1 == 0) && (n % n == 0))
		return (1);
	return (0);
}
