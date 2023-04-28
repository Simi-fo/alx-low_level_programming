#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: new string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int len = 0;

	while (str[len])
	len++;

	nn = malloc(sizeof(list_t));
	if (!nn)
	return (NULL);

	nn->str = strdup(str);
	nn->len = len;
	nn->next = (*head);
	(*head) = nn;

	return (*head);
}
