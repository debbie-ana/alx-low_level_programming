#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list
 * @idx: index of list where new node is to be added, starts at 0
 * @n: data to be added
 *
 * Return: address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a = malloc(sizeof(listint_t));
	listint_t *b = *head;
	unsigned int i;

	if (a == NULL || head == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;
	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}
	for (i = 0; b && i < idx; i++)
	{
		if (i == idx - 1)
		{
			a->next = b->next;
			b->next = a;
			return (a);
		}
		else
			b = b->next;
	}
	return (NULL);
}
