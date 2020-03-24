#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints all the elements of a list_t list
 * @h:the linked list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{

		h = h->next;
		cnt++;
	}

	return (cnt);
}
