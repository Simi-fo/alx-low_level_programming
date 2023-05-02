#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the first node
 * @n: input
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (!nn)
	return (NULL);

	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
