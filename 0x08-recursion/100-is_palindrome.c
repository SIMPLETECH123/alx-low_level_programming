#include "main.h"
/**
 * _strlen_recursion - the lenght of a string
 * @s: the string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == "\0")
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - if a string is a palindrome
 * @s: the string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (is_palindrome(*s == ((_strlen_recursion(s + 1) + 1) - 1)))
		return (1);
	else
		return (0);
}
