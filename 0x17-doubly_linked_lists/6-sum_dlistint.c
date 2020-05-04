#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in linked list
 *
 * @head: pointer to head
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
