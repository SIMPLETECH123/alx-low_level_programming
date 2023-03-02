#include "main.h"

/**
 * leet - encode a srting into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (n[i] == n[j])
			{
				n[i] = s[j];
			}
		}
	}
	return (n);
}
