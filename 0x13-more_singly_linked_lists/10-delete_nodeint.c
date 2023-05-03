#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a linked list
 * @head: first node of a linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nll = *head;
	listint_t *cn = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(nll);
	return (1);
	}

	while (x < index - 1)
	{
	if (!nll || !(nll->next))
	return (-1);
	nll = nll->next;
	x++;
	}

	cn = nll->next;
	nll->next = cn->next;
	free(cn);

	return (1);
}
