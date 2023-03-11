#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - check if char is a number or not
 * @a: char to be checked
 * Return: 1 if it is a number else 0
 */
int num_checker(char *a)
{
	int len = strlen(a);
	int i = 0;
	int num = 0;

	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}

/**
 * main - add positive numbers
 * @argc:number of arhument
 * @argv: array of arguements
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int num;
	int sum = 0;

	while (i < argc)
	{
		num = num_checker(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + num;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
