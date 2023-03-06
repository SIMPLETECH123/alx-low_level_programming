#include "main.h"

/**
 * print_diagsums -sum of the two diagonals of a square matrix of integers.
 * @a: array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
