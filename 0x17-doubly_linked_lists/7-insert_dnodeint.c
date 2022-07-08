#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: pointer to linked list
 * @idx: position to insert node
 * @n: node to be inserted
 *
 * Return: address of new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_l = NULL;
	dlistint_t *head = *h, *prev = *h;
	unsigned int i;

	if (h == NULL || (head == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	head = head->next;
	for (i = 1; i < idx; i++)
	{
		if (prev->next == NULL)
			return (NULL);
		head = head->next;
		prev = prev->next;
	}
	if (head == NULL)
		return (add_dnodeint_end(h, n));
	new_l = malloc(sizeof(dlistint_t));
	if (new_l == NULL)
		return (NULL);
	new_l->n = n;
	new_l->next = head;
	new_l->prev = prev;
	prev->next = new_l;
	if (head != NULL)
		head->prev = new_l;
	return (new_l);
}
