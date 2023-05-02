#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the linked list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *fll;

	if (head == NULL)
	return;

	while (*head)
	{
	fll = (*head)->next;
	free(*head);
	*head = fll;
	}

	*head = NULL;
}
