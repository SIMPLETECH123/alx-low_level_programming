#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d:defined pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if ((*d).name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("Name: (nil)");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}