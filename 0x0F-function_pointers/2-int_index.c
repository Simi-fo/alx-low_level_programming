#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (x = 0; x < size; x++)
	{
	if (cmp(array[x]))
	return (x);
	}

	return (-1);
}
