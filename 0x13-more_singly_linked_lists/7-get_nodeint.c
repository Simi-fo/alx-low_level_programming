#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a linked list
 * @head: first node of the linked list
 * @index: index of the node starting at 0
 * Return: pointer to the node or NULL if the node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *nll = head;

	while (nll && x < index)
	{
	nll = nll->next;
	x++;
	}

	return (nll ? nll : NULL);
}
