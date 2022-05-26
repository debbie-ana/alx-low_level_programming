#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
