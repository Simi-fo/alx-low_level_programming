#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int first_sum = 0;
	int second_sum = 0;
	int b;

	for (b = 0; b < size; b++)
	{
	first_sum = first_sum + a[b * size + b];
	}

	for (b = size - 1; b >= 0; b--)
	{
	second_sum += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", first_sum, second_sum);
}
