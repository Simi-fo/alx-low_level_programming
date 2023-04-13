#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words
 * @str: input
 * Return: nothing
 */

char **strtow(char *str)
{
	int x = 0;
	int y;
	char **w;
	char *t;

	if (str == NULL && strlen(str) == 0)
	{
	return (NULL);
	}

	for (y = 0; str[y]; y++)
	{
	if (str[y] != ' ' && (y == 0 || str[y - 1] == ' '))
	{
	x++;
	}
	}

	w = (char **)malloc((x + 1) * sizeof(char *));

	if (w == NULL)
	{
	return (NULL);
	}

	t = strtok(str, " ");

	for (y = 0; t != NULL; y++)
	{
	w[y] = strdup(t);
	t = strtok(NULL, " ");
	}

	w[x] = NULL;

	return (w);
}
