#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to list
 *
 * Description - the function sets head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*head)->next)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
