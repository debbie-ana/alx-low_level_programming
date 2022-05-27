#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *a;
	size_t size;
	int d;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			a = (*h)->next;
			free(*h);
			*h = a;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
