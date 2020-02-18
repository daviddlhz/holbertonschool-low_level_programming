#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: is the parameter.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
}
