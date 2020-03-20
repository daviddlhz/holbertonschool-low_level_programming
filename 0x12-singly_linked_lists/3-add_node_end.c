#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - this function returns the length of a string.
 * @s : s is a character
 * Return: length of string - i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adding a new node at the end of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes or elements.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_mod;
	list_t *p;

	n_mod = malloc(sizeof(list_t));

	if (n_mod != NULL)
	{
		n_mod->str = strdup(str);
		n_mod->len = _strlen(str);
		n_mod->next = NULL;

	}
	else
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = n_mod;
		return (n_mod);
	}

	p = *head;

	while (p->next)
	{
		p = p->next;
	}

	p->next = n_mod;

	return (n_mod);
}
