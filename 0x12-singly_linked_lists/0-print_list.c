#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list to be printed
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *l = h;
	size_t size = 0;

	while (l != NULL)
	{
		if (l->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", l->len, l->str);
		size++;
		l = l->next;
	}
	return (size);
}
