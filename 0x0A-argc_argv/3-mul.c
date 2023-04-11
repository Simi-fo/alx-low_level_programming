#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;

	if (argc < 3)
	{
		printf("error\n");

		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);

		return (0);
	}
}
