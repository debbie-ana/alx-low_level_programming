#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list
 * @head: linked list
 *
 * Return: the number of nodes in the list
 * if function fails, exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int d;

	if (head == NULL)
		exit(98);
	while (head)
	{
		d = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n",
					(void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
