#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		t = head;
		head = t->next;
		free(t);
	}
}
