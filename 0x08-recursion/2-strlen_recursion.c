#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: is a array with contains a string
 * Return: the numbers of characters in a string.
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
