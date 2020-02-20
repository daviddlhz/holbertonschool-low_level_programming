#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: is the parameter.
 * @src: is other parameter.
 * @n: other paremeter.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
