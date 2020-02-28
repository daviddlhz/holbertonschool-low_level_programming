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
	int i, j;

	i = 0;

	j = 0;
	while (i != n)
	{
		if (src[i] == '\0')
		{
			dest[j] = '\0';
			break;
		}
		else
		{
			dest[j] = src[i];
		}
		j++;
		i++;
	}
	while (j != n)
	{
		dest[j++] = '\0';
	}
	return (dest);
}
