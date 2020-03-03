#include "holberton.h"
/**
 * _strdup - is a function copy the array in other
 * @str: is the array that is copy
 * Return: the new pointer or array copied.
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	i = 0;

	if (str != NULL)
	{

	while (str[i] != '\0')
	{
		i++;
	}
	}
	else
	{
		return (NULL);
	}

	p = malloc(i * sizeof(char));

	if (p != NULL)
	{
		for (j = 0; j < i; j++)
		{

		p[j] = str[j];

		}

		return (p);
	}
	else
	{

		return (NULL);
	}
}
