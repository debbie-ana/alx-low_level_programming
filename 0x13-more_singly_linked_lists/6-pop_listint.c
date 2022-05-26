#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to list
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int num;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	*head = (*head)->next;
	return (num);
}
