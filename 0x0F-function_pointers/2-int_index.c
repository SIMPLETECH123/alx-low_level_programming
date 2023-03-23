#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @cmp: a pointer
 * @array: arrat to search
 * @size: number of element in the array
 * Return: 0 always(success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (i);
}
