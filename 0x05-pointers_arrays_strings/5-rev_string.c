#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: is other parameter.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, l, i, lent;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = i;

	}
	for (a = 0; a  < i / 2; a++)
	{
		lent = s[a];
		s[a] = s[l];
		s[l] = lent;

		l--;

	}
}
