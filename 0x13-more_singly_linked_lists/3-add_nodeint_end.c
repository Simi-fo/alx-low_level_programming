#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the first element in the list
 * @n: input
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn;
	listint_t *temp = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn)
	return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
	*head = nn;
	return (nn);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = nn;

	return (nn);
}
