#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @dest: is the parameter.
 * @src: is other parameter.
 * @n: other paremeter.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != src[n])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
