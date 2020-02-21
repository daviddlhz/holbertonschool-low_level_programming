#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @s: is the parameter.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
