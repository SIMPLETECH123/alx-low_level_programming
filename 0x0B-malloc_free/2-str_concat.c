#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - unction that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return:concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s3 = malloc(sizeof(char) * ((i + j + 1)));
	i = j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}
	s3[i] = '\0';
	return (s3);
}
