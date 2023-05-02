#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position in a linked list
 * @head: first nodd in the linked list
 * @idx: index of the new node
 * @n: input
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *nn;
	listint_t *nll = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
	return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
	nn->next = *head;
	*head = nn;
	return (nn);
	}

	for (x = 0; nll && x < idx; x++)
	{
	if (x == idx - 1)
	{
	nn->next = nll->next;
	nll->next = nn;
	return (nn);
	}

	else
	nll = nll->next;
	}

	return (NULL);
}
