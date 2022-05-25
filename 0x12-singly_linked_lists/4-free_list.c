#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list to be freed
 *
 * Returb: void
 */

void free_list(list_t *head)
{
	list_t *n;

	while (*head != NULL)
	{
		n = head->next;
		free(head->str);
		free(head);
		head = n;
	}
}
