#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *fll;

	while (head)
	{
	fll = head->next;
	free(head);
	head = fll;
	}
}
