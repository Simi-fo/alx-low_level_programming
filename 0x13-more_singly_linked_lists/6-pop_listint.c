#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node's data(n)
 * @head: pointer to the first element in the linked list
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *nll;
	int n;

	if (!head || !*head)
	return (0);

	n = (*head)->n;
	nll = (*head)->next;
	free(*head);
	*head = nll;

	return (n);
}
