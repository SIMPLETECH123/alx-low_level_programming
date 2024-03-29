#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator:input
 * @n:number of arguement
 *
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *p;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
