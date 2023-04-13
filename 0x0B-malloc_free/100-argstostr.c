#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments of
 * a program
 * @ac: input
 * @av: input
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *astr;
	int x, y, z = 0;
	int n = 0;

	if (ac == 0 && av == 0)
	return (NULL);

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	n++;
	}
	n += ac;

	astr = malloc(sizeof(char) * n + 1);
	if (astr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
	{
	astr[z] = av[x][y];
	z++;
	}
	if (astr[z] == '\0')
	{
	astr[z++] = '\n';
	}
	}
	return (astr);
}
