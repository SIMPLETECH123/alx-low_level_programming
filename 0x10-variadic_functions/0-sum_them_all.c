#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:number of arguement
 *
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list d;
	int sum;
	unsigned int i;

	va_start(d, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(d, int);

	va_end(d);
	return (sum);
}
