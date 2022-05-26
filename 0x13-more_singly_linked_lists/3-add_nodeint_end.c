#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to address of list
 * @n: node to be added
 *
 * Return: address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a = malloc(sizeof(listint_t));
	listint_t *b;

	if (a == NULL)
		return (NULL);
	a->n = n;
	if (*head == NULL)
	{
		a->next = NULL;
		*head = a;
	}
	else
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = a;
		a->next = NULL;
	}
	return (*head);
}
