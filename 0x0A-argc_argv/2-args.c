#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; argc > x; x++)
	{
	printf("%s\n", argv[x]);
	}

	return (0);
}
