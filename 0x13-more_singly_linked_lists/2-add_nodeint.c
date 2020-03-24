#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - prints all the elements of a list_t list
 * @head: is a init the linked list
 * @n: is a value of data
 * Return: Address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_model;

	new_model = malloc(sizeof(listint_t));

	if (new_model != NULL)
	{
		new_model->n = n;
		new_model->next = *head;
		*head = new_model;
	}
	else
	{
		return (NULL);
	}

	return (new_model);
}
