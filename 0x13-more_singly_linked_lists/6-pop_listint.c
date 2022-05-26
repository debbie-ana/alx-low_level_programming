#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to list
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int num;

	if (*head == NULL)
		return (0);
	a = (*head)->next;
	num = (*head)->n;
	*head = a;
	free_listint(a);
	return (num);
}
