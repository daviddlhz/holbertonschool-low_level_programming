#include "lists.h"
/**
 * dlistint_len - prints all elements a double single list
 *
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	for (len = 0; h; len++)
	{
		h = h->next;
	}
	return (len);
}
