#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenate all arguements
 * @ac:arg1
 * @av:areg2
 * Return:arg to string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, l, m;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	m = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] == '\0'; l++)
		{
			p[m++] = av[k][l];
		}
		p[m++] = '\n';
	}
	p[m] = '\0';
	return (p);
}
