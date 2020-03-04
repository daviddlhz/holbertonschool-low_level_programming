#include "holberton.h"
/**
 * _strdup - is a function copy the array in other
 * @str: is the array that is copy
 * Return: the new pointer or array copied.
 */

char *_strdup(char *str)
{
	int i;
	int count;
	char *s;

	count = 1;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	s = malloc(count);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count + 1; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
