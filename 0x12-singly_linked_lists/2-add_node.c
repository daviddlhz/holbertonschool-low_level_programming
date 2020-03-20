#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - this function returns the length of a string.
 * @s : s is a character
 * Return: the numbers of length - i
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
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes in the new model.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_mod;

	n_mod = malloc(sizeof(list_t));

	if (n_mod != NULL)
	{
		n_mod->str = strdup(str);
		n_mod->len = _strlen(str);
		n_mod->next = *head;
		*head = n_mod;
	}
	else
	{
		return (NULL);
	}

	return (n_mod);
}
