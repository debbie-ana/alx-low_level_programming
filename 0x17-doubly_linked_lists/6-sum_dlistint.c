#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) in a linked list
 * @head: linked list
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;
	int sum = 0;

	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
