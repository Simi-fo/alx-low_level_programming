#include "main.h"

/**
 * print_chessboard - a function that prints chessboard
 * @a: the array depicting a chessboard
 * Return: always O
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int d;

	for (j = 0; j < 8; j++)
	{
	for (d = 0; d < 8; d++)
	{
	_putchar(a[j][d]);
	}
	_putchar('\n');
	}
}
