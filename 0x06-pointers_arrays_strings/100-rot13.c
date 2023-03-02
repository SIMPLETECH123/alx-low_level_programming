#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @n: input
 * Return: n
 */
char *rot13(char *)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == a[j])
		{
			s[i] = b[j];
			break;
		}
	}
	return (s);
}
