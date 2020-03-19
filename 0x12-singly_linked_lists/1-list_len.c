#include <stdio.h>
#include "lists.h"

/**
 * list_len - numbers of elements in the linked
 * @h:the linked list
 * Return: the number of nodes or elements
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{

		h = h->next;
		cnt++;
	}

	return (cnt);
}
