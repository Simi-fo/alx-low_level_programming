#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	char x = argc - 1;

	(void) argv;
	printf("%d/n", x);

	return (0);
}
