#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index of a linked list
 * @head: pointer to linked list
 * @index: index at which node is to be deleted
 *
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}
	curr = temp->next;
	temp->next = curr->next;
	free(curr);
	return (1);
}
