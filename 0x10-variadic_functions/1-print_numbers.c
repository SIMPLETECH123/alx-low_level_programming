#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:the string to be printed
 * @n:numbers
 *
 * Return: 0 always
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
