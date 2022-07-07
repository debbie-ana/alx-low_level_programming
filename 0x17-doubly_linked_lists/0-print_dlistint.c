#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
