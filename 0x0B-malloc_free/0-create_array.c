#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - is a function using malloc
 * @size: is a size of array
 * @c: is a content that save in the array
 * Return: null is size is 0 if not return a pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	i = 0;

	if (size != 0)
	{
		p = malloc(size * sizeof(c));

		if (p == NULL)
		{

			return (NULL);
		}

		while (i < size)
		{
			p[i] = c;
			i++;
		}
		p[i] = 0;

		return (p);
	}
	else
	{
		return (NULL);
	}
}
