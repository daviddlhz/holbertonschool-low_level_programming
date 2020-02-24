#include "holberton.h"
/**
 * _memcpy - check the code for Holberton School students.
 * @dest: is the parameter.
 * @src: is other parameter.
 * @n: other parameter again.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
