#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double point to the list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *cn = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	nn = malloc(sizeof(list_t));
	if (!nn)
	return (NULL);

	nn->str = strdup(str);
	nn->len = len;
	nn->next = NULL;

	if (*head == NULL)
	{
	*head = nn;
	return (nn);
	}

	while (cn->next)
	cn = cn->next;

	cn->next = nn;

	return (nn);
}
