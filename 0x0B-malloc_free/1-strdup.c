#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *nao;
	int x = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
	x++;

	nao = malloc(sizeof(char) * (x + 1));

	if (nao == NULL)
	return (NULL);

	for (y = 0; str[y]; y++)
	nao[y] = str[y];

	return (nao);
}
