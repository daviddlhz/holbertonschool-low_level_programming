#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @s: is the parameter.
 * @b: is other parameter.
 * @n: other parameter again.
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
