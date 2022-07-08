#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: linked list
 * @index: position of node to be gotten
 *
 * Return: node at index or NULL if index dies not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int i = 0;

	while (h != NULL)
	{
		if (i == index)
			return (h);
		i++;
		h = h->next;
	}
	return (NULL);
}
