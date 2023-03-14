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
	int i, j, m;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);
	m = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[m] = av[i][j];
			m++;
		}
		p[m] = '\n';
		m++;
	}
	return (p);
}
