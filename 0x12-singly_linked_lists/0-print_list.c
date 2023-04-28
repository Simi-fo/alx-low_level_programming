#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements of list_t list
 * @h: pointer to the list_t to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	for (; h; h = h->next, x++)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	}

	return (x);
}
