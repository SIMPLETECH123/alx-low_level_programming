#include "main.h"

/**
 * reverse_array - function reverse the content of an array of integers
 * @a: first array
 * @n: lenght of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++ && n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
