#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to list
 * @n: node to be added
 *
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_l = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_l == NULL)
		return (NULL);
	new_l->n = n;
	new_l->next = NULL;
	new_l->prev = NULL;

	if (*head == NULL)
	{
		*head = new_l;
		return (new_l);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_l;
	new_l->prev = last;
	return (new_l);
}
