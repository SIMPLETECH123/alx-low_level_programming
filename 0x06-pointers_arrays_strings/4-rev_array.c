#include "main.h"

/**
 * reverse_array - function reverse the content of an array of integers
 * @a: first array
 * @n: lenght of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	while (a[n] != '\0')
	{
		for (i = 0; i < a[n]; i++)
		{
			a[i] = a[n - i];
		}
	}
}
