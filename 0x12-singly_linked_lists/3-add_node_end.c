#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to address of head
 * @str: string value for node
 *
 * Return: address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = malloc(sizeof(list_t));
	list_t *a;

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	if (*head == NULL)
	{
		n->next = NULL;
		*head = n;
	}
	else
	{
		a = *head;
		while (a->next != NULL)
			a = a->next;
		a->next = n;
		n->next = NULL;
	}
	return (*head);
}
