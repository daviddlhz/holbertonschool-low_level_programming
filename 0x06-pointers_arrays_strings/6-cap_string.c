#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @s: is the parameter.
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		     || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
