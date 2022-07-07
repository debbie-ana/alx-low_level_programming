#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
