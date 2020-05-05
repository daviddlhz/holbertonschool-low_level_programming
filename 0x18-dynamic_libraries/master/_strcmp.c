#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 * @s1: is the parameter.
 * @s2: is other parameter.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] >  s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
