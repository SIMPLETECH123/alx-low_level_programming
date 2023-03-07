#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: the string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	*s == '\0';
	_putchar(*s--);

	if (*s == s[0 - 1])
		return;
	_print_rev_recursion(s);
}
