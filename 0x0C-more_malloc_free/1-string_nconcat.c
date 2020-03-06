#include "holberton.h"

/**
 *string_nconcat - malloc chech
 *@s1: char1.
 *@s2: char2.
 *@n: number of integer.
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
		{
		}
	}
	if (j > n)
	{
		j = n;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		s[x] = s1[x];
	}
	for (x = 0; x < j; x++)
	{
		s[x + i] = s2[x];
	}
	s[i + j] = '\0';
	return (s);
}
