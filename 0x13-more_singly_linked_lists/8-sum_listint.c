#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data(n) of a linked list
 * @head: furst node of the linked list
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *nll = head;

	while (nll)
	{
	n += nll->n;
	nll = nll->next;
	}

	return (n);
}
