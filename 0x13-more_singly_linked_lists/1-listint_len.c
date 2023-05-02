#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked list
 * @h: input
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)

	{
	n++;
	h = h->next;
	}

	return (n);
}
