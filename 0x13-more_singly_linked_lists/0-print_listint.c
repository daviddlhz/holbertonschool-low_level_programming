#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h:the linked list
 * Return: the number of nodes or elements
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;
		cnt++;
	}

	return (cnt);
}
