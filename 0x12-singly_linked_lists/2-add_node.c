#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to address of node
 * @str: string to be added in node
 *
 * Return: pointer to new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (*head);
}
