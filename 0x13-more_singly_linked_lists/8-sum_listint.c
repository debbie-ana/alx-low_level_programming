#include "lists.h"

/**
 * sum_listint - gets sum of all data (n) of a linked list
 * @head: linked list
 *
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *a = head;

	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}
